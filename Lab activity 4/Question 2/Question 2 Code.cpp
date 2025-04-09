#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node {
    int data;
    struct Node* left; //introduce pointers to the left and right children of nodes
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); //create new node and allocate memory to it
    newNode->data = data; //set data field to provided value
    newNode->left = newNode->right = NULL; //current node has no children yet 
    return newNode; //point to new node
}

int isBSTUtil(struct Node* node, int min, int max) {
    if (node == NULL)
        return 1; //if current node is NULL, returns 1. An empty tree is a BST
    if (node->data < min || node->data > max)
        return 0; //check if current node's data is within min max range. If not, it's not a BST
    return isBSTUtil(node->left, min, node->data - 1) &&
           isBSTUtil(node->right, node->data + 1, max); //recursively checks left subtree with updated max value and right subtree with update min value
}

int isBST(struct Node* node) {
    return isBSTUtil(node, INT_MIN, INT_MAX); //Calls isBSTUtil with initial range set to full range
}

int main() {
    struct Node* root = createNode(2);
    root->left = createNode(1);
    root->right = createNode(3); //create the root node and the left and right child nodes
    
    if (isBST(root)) //checks if the tree rooted at 'root' is a BST
        printf("The tree is a BST\n");
    else
        printf("The tree is not a BST\n");
    
    return 0;
}

