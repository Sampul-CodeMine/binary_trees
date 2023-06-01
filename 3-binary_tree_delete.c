#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: the binary tree to delete
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->right)
		binary_tree_delete(tree->right);
	if (tree->left)
		binary_tree_delete(tree->left);

	free(tree);
}
