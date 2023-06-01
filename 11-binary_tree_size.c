#include "binary_trees.h"

/**
 * binary_tree_size - function to find the size of a binary tree
 * @tree: the binary tree to get its size
 * Return: 0 if tree is NULL else the size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lsize = 0;
	size_t rsize = 0;

	if (tree == NULL)
		return (0);

	lsize = binary_tree_size(tree->left) + 1;
	rsize = binary_tree_size(tree->right);

	return (lsize + rsize);
}
