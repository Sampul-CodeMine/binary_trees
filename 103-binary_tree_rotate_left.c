#include "binary_trees.h"

/**
 * binary_tree_rotate_left - function to rotate a tree to the left
 * @tree: the binary tree to rotate.
 * Return: Pointer to the new node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *holder;

	if (tree == NULL)
		return (NULL);
	if (tree->right == NULL)
		return (NULL);
	holder = tree->right;
	tree->right = holder->left;
	if (holder->left != NULL)
		holder->left->parent = tree;
	holder->left = tree;
	holder->parent = tree->parent;
	tree->parent = holder;

	return (holder);
}
