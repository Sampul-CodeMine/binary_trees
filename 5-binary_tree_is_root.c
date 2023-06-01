#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if a node is a root node
 * @node: The node to check if it is a root node
 * Return: Returns 1 if node is a root else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->parent)
			return (1);
		return (0);
	}
	return (0);
}
