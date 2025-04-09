#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right; //introduce pointers to the left and right children of a node
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); //allocates memory for a new node
    newNode->data = data; //set data field to provided value
    newNode->left = newNode->right = NULL; //indicates that the current node has no children yet
    return newNode; //points to the new node
}

int areMirror(struct Node* a, struct Node* b) { //check if two binary trees are mirror images of each other
    if (a == NULL && b == NULL)
        return 1; //if both nodes are NULL, that is the base case for recursion, meaning they are mirrors and it returns 1
    if (a == NULL || b == NULL)
        return 0; //if one is NULL but the other isn't, they are not mirrors and it returns 0
    return a->data == b->data && //otherwise, it checks if the current nodes are equal, then recursively checks if left subtree is a mirror of the right, and vice versa
           areMirror(a->left, b->right) &&
           areMirror(a->right, b->left); //returns 1 if all conditions are satisfied, and 0 otherwise
}

int main() {
    struct Node* a = createNode(1); //create first tree
    a->left = createNode(2);
    a->right = createNode(3);
    a->left->left = createNode(4);
    a->left->right = createNode(5);

    struct Node* b = createNode(1); //create second tree. Notice 3 and 2 are flipped, and 4 and 5 are flipped. This makes them mirrors
    b->left = createNode(3);
    b->right = createNode(2);
    b->right->left = createNode(5);
    b->right->right = createNode(4);

    if (areMirror(a, b))
        printf("The trees are mirror images of each other\n");
    else
        printf("The trees are not mirror images of each other\n");

    return 0;
}

