#include <stdio.h>
#include <stdlib.h>

//Here we define the node structure.
struct Node {
    int data;
    struct Node* next;
};

//Here we write a function to create a new node.
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); //Allocate memory for the program equal to the size of a node.
    newNode->data = data; //Makes the item we're looking at be a valid element.
    newNode->next = NULL; //Ensures the next node is not available for processing. 
    return newNode;
}

//Here we write a function to display the linked list.
void displayList(struct Node* head) {
    struct Node* temp = head; //Make the head node considered "temp" so that it is displayed.
    while (temp != NULL) { //Continue until we reach the end.
        printf("%d -> ", temp->data); //Print present value.
        temp = temp->next; //Make the next node become the temp node.
    }
    printf("NULL\n");
}

//Here we write a function to reverse the linked list recursively.
struct Node* reverseListRecursive(struct Node* head) {
    if (head == NULL || head->next == NULL) { //Set the stopping condition for the recursive function. If the head is NULL, or if there is only 1 node in the list, return the head.
        return head;
    }
    struct Node* rest = reverseListRecursive(head->next); //Call this recursive function on the next node.
    head->next->next = head; //Set the next node's next pointer to the current head.
    head->next = NULL; //Set the current head's next pointer to NULL.
    return rest; //Return the new head of the reversed list.
}

//Here we write a function to free the linked list.
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp); //This frees every element from the program.
    }
}

int main() {
    //Here we'll create a simple linked list to run our program.
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    
    printf("Original List:\n");
    displayList(head);
    
    head = reverseListRecursive(head);
    
    printf("Recursively reversed List:\n");
    displayList(head);
    
    freeList(head);
    return 0;
}
