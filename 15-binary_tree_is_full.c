#include "binary_trees.h"

/**
 * binary_tree_is_full - function to see if a binary tree  is full
 * @tree: The tree to check
 * Return:0 if not full or tree is NULL else 1 if full
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left && tree->right)
	{
		if (binary_tree_is_full(tree->right) != 1)
			return (0);
		if (binary_tree_is_full(tree->left) != 1)
			return (0);
	}
	if (tree->right != NULL && tree->left == NULL)
		return (0);
	else if (tree->right == NULL && tree->left != NULL)
		return (0);
	else
		return (1);
}
