#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node child to the right
 * of its parent node
 * @parent: The parent node
 * @value: the value of the child node to be inserted
 * Return: a pointer to the node inserted
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *r_child;

	if (parent == NULL)
		return (NULL);

	r_child = malloc(sizeof(binary_tree_t));
	if (r_child == NULL)
		return (NULL);

	r_child->n = value;
	r_child->parent = parent;
	r_child->left = r_child->right = NULL;

	if (parent->right == NULL)
		parent->right = r_child;
	else
	{
		r_child->right = parent->right;
		parent->right->parent = r_child;
		parent->right = r_child;
	}

	return (r_child);
}
