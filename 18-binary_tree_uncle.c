#include "binary_trees.h"

/**
 * binary_tree_uncle -  Function to find parent sibling for a current node
 * @node: node to find its parent's siblings
 * Return: pointer to the uncle of the current node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *keep;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	keep = node->parent;
	if (keep->parent && keep->parent->left != keep)
		return (keep->parent->left);
	else if (keep->parent && keep->parent->right != keep)
		return (keep->parent->right);
	return (NULL);
}
