#include <stdio.h>
#include <stdlib.h>

//Here we define the node structure.
struct Node {
    int data;
    struct Node* next;
};

//Here we write a function to create a new node.
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); //Allocate memory equal to the size of the node.
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

//Here we write a function to display the linked list.
void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) { //Repeat this process for every node in the list.
        printf("%d -> ", temp->data); //Print the present value.
        temp = temp->next; //Move to the next node by making the current value equal to next.
    }
    printf("NULL\n");
}

//Here we write a function to reverse the linked list iteratively.
struct Node* reverseListIterative(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL; //Making previous and next NULL ensures that current is all that's printed.
    while (current != NULL) {
        next = current->next;  //Move forward.
        current->next = prev; //Make sure that the forward movement is backward.
        prev = current; //Next movement will be to previous.
        current = next; //Make the next movement.
    }
    return prev;
}

//Here we write a function to free the linked list.
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp); //Frees everything until the head element is NULL.
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
    
    head = reverseListIterative(head);
    
    printf("Iteratively reversed list:\n");
    displayList(head);
    
    freeList(head);
    return 0;
}
