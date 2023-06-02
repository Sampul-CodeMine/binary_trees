#include "binary_trees.h"

/**
 * binary_tree_rotate_right - function to rotate a tree to the right
 * @tree: the binary tree to rotate.
 * Return: Pointer to the new node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *holder;

	if (tree == NULL)
		return (NULL);
	if (tree->left == NULL)
		return (NULL);
	holder = tree->left;
	tree->left = holder->right;
	if (holder->right != NULL)
		holder->right->parent = tree;
	holder->right = tree;
	holder->parent = tree->parent;
	tree->parent = holder;

	return (holder);
}
