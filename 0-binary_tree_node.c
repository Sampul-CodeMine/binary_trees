#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a new node in a tree
 * @parent: the parent node to add a new child node to
 * @value: value of the new node
 * Return: pointer to the new updated node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_child_node;

	nw_child_node = malloc(sizeof(binary_tree_t));
	if (nw_child_node == NULL)
		return (NULL);
	nw_child_node->n = value;
	nw_child_node->parent = parent;
	nw_child_node->left = nw_child_node->right = NULL;

	return (nw_child_node);
}
