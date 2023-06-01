#include "binary_trees.h"
#include "14-binary_tree_balance.c"

/**
 * binary_tree_is_perfect - function to check if the tree is a perfect binary
 * tree
 * @tree: The tree to check
 * Return: 0 if tree is NULL else 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lwing = 0;
	int rwing = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (binary_tree_balance(tree) != 0)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		lwing = binary_tree_is_perfect(tree->left);
		rwing = binary_tree_is_perfect(tree->right);
		return (lwing && rwing);
	}
	return (0);
}
