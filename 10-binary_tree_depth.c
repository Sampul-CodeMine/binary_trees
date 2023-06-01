#include "binary_trees.h"

/**
 * binary_tree_depth - Function to find the depth of the binary tree
 * @tree: the binary tree to find its depth
 * Return: The depth of the binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int itr = 0;

	for (itr = 0; tree && tree->parent; ++itr)
		tree = tree->parent;
	return (itr);
}
