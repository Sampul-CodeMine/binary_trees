#include "binary_trees.h"
#include "9-binary_tree_height.c"

void bt_porder_helper(const binary_tree_t *, void (*func)(int), size_t);

/**
 * binary_tree_levelorder - function to traverse a binary tree in level-order
 * @tree: the binary tree to traverse
 * @func: variadic function to perform on each node
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree,
		void (*func)(int))
{
	size_t depth;
	size_t height;

	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_height(tree) + 1;

	for (depth = 1; depth <= height; depth++)
	{
		bt_porder_helper(tree, func, depth);
	}
}

/**
 * bt_porder_helper - function to perform post-order traversal
 * @tr: the tree to traverse
 * @func: variadic function to perform
 * @dt: depth of the tree to call function on
 */
void bt_porder_helper(const binary_tree_t *tr, void (*func)(int), size_t dt)
{
	if (dt == 1)
		func(tr->n);
	else
	{
		bt_porder_helper(tr->left, func, dt - 1);
		bt_porder_helper(tr->right, func, dt - 1);
	}
}
