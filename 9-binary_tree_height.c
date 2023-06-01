#include "binary_trees.h"

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
