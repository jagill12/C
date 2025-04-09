#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left; //introduce a pointer to the left child of a node
    struct Node* right; //introduce a pointer to the right child of a node
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); //create a new node and allocate memory for it
    newNode->data = data; //set data field to provided value
    newNode->left = newNode->right = NULL; //indicate that the current node has no children yet
    return newNode; //point to the new node
}

int countNodes(struct Node* root) { //count root nodes in a binary tree
    if (root == NULL)
        return 0; //return 0 (or false) if current 'root' node is NULL, which is base case for recursion
    return 1 + countNodes(root->left) + countNodes(root->right); //otherwise, it adds 1 to count the current node plus the nodes of the left and right subtrees
}

int countLeafNodes(struct Node* root) { //count leaf nodes in a binary tree
    if (root == NULL)
        return 0; 
    if (root->left == NULL && root->right == NULL)
        return 1; //if it has no left or right children, it is a leaf node and returns 1
    return countLeafNodes(root->left) + countLeafNodes(root->right); //return the sum of the leaf nodes in left and right subtrees
}

int main() {
    struct Node* root = createNode(1); //create all nodes, including root node, left and right children of root node, and two child nodes for the node with data 2
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    
    printf("Total nodes: %d\n", countNodes(root)); //counts total nodes
    printf("Leaf nodes: %d\n", countLeafNodes(root)); //counts leaf nodes
    
    return 0;
}

