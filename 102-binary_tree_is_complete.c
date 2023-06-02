#include "binary_trees.h"
#include "11-binary_tree_size.c"

int help_checker(const binary_tree_t *, size_t, size_t);

/**
 * binary_tree_is_complete - function to check if the binary tree is complete
 * @tree: the tree to check
 * Return: 	1 if tree is complete
 * 		0 if the tree is not complete or is NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t bt_size = 0;

	if (tree == NULL)
		return (0);
	bt_size = binary_tree_size(tree);

	return (help_checker(tree, 0, bt_size));
}

/**
 * help_checker - function to check if each wing of a node has a leaf
 * @tree: the tree to check
 * @start: the start node
 * @depth: the depth or size of the parent node
 * Return: 1 if the tree is NULL
 *         0 if the start node is greater than or equal to the tree size
 */
int help_checker(const binary_tree_t *tree, size_t start, size_t depth)
{
	size_t lwing;
	size_t rwing;

	if (tree == NULL)
		return (1);
	if (start >= depth)
		return (0);

	lwing = help_checker(tree->left, 2 * start + 1, depth);
	rwing = help_checker(tree->right, 2 * start + 2, depth);

	return (lwing && rwing);
}
