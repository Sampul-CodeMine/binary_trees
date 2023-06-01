#include "binary_trees.h"

/**
 * binary_tree_nodes - function to count nodes with at least a child
 * @tree: the tree to count its nodes
 * Return: Number of nodes with children
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lcount = 0;
	size_t rcount = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	rcount = binary_tree_nodes(tree->right);
	lcount = binary_tree_nodes(tree->left) + 1;

	return (rcount + lcount);
}
