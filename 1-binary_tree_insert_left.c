#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node child to the left
 * of its parent node
 * @parent: The parent node
 * @value: the value of the child node to be inserted
 * Return: a pointer to the node inserted
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *l_child;

	if (parent == NULL)
		return (NULL);

	l_child = malloc(sizeof(binary_tree_t));
	if (l_child == NULL)
		return (NULL);

	l_child->n = value;
	l_child->parent = parent;
	l_child->left = l_child->right = NULL;

	if (parent->left == NULL)
		parent->left = l_child;
	else
	{
		l_child->left = parent->left;
		parent->left->parent = l_child;
		parent->left = l_child;
	}

	return (l_child);
}
