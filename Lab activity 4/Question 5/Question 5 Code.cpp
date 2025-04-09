#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; //store value of a node, then create pointers to left and right children
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); //allocate memory for a node
    newNode->data = data; //give it data
    newNode->left = newNode->right = NULL; //initialize left and right pointers to NULL to say this node has no children yet
    return newNode; //point to new node
}

int areIdentical(struct Node* a, struct Node* b) {
    if (a == NULL && b == NULL)
        return 1; //if both are NULL, that is the base case for recursion since they are identical in that instance
    if (a == NULL || b == NULL)
        return 0; //if one node is NULL but not the other, they are not identical, and it returns 0
    return a->data == b->data && //checks if data in the current nodes are equal, then recursively checks if the left subtree of a is identical to the left subtree of b, and vice versa for the right subtrees
           areIdentical(a->left, b->left) &&
           areIdentical(a->right, b->right);
} //returns 1 if all conditions are satisfied, and 0 otherwise

int main() {
    struct Node* a = createNode(1); //create a tree with 5 nodes
    a->left = createNode(2);
    a->right = createNode(3);
    a->left->left = createNode(4);
    a->left->right = createNode(5);

    struct Node* b = createNode(1); //create an identical tree with 5 nodes
    b->left = createNode(2);
    b->right = createNode(3);
    b->left->left = createNode(4);
    b->left->right = createNode(5);

    if (areIdentical(a, b))
        printf("The trees are identical\n");
    else
        printf("The trees are not identical\n");

    return 0;
}

