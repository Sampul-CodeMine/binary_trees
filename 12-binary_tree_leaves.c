#include "binary_trees.h"

/**
 * binary_tree_leaves - function to count the number of leaves in a binary tree
 * @tree: the binary tree to get its size
 * Return: 0 if tree is NULL else the leaf counts
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lcount = 0;
	size_t rcount = 0;

	if (tree ==  NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	rcount = binary_tree_leaves(tree->right);
	lcount = binary_tree_leaves(tree->left);

	return (rcount + lcount);
}
