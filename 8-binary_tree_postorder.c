#include "binary_trees.h"

/**
 * binary_tree_postorder - Function to traverse through a tree in post-ordered
 * precedence
 * @tree: the tree to traverse through
 * @func: variadic function pointer to another node
 * Return: Nothing if @func or @tree is NULL
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
