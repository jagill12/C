#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int data)
{
	struct node* node
		= (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	
	return (node);
}

void printPreorder(struct node* node)
{
	if (node == NULL)
		return;
		
	printf("%d ", node->data);
	
	printPreorder(node->left);
	
	printPreorder(node->right);
}

int main()
{
	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	
	printf("Preorder traversal of binary tree is \n");
	printPreorder(root);
	getchar();
	return 0;
}
