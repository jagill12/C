#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

struct TreeNode* newNode(int val) {
	struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	node->val = val;
	node->left = NULL;
	node->right = NULL;
	return node;
}

int height(struct TreeNode* root) {
	if (root == NULL)
		return 0;
	int leftHeight = height(root->left);
	int rightHeight = height(root->right);
	return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

int diameter(struct TreeNode* root) {
	if (root == NULL)
		return 0;
	int leftHeight = height(root->left);
	int rightHeight = height(root->right);
	
	int diameterThroughRoot = leftHeight + rightHeight + 1;
	
	int leftDiameter = diameter(root->left);
	int rightDiameter = diameter(root->right);
	
	return (diameterThroughRoot > leftDiameter && diameterThroughRoot > rightDiameter) ? diameterThroughRoot : (leftDiameter > rightDiameter ? leftDiameter : rightDiameter);
}

int main() { 
	struct TreeNode* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->right = newNode(6);
	root->left->right->left = newNode(7);
	root->left->right->right = newNode(8);
	printf("Diameter of the binary tree is: %d\n", diameter(root));
	return 0;
}
