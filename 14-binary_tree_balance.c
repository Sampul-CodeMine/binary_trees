#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *);

/**
 * binary_tree_balance - function to check if tree is a balanced binary tree
 * @tree: Tree to check if balanced
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lwing = 0;
	int rwing = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		lwing = binary_tree_height(tree->left) + 1;
	else
		lwing = 0;
	if (tree->right)
		rwing = binary_tree_height(tree->right) + 1;
	else
		rwing = 0;
	return (lwing - rwing);
}


/**
 * binary_tree_height - Function to find the height of the binary tree
 * @tree: the binary tree to find its height
 * Return: The height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_wings = 0;
	size_t right_wings = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_wings = binary_tree_height(tree->left) + 1;
	right_wings = binary_tree_height(tree->right) + 1;

	if (right_wings > left_wings)
		return (right_wings);
	else
		return (left_wings);
}
