#include "binary_trees.h"
#include "10-binary_tree_depth.c"

/**
 * binary_trees_ancestor - function to find the ancestral parent of two nodes
 * @first: first node to check for its ancestor
 * @second: second node to check for its ancestor
 * Return: NULL if no commone ancestor else a pointer to the low common anc.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	int level_one = 0;
	int level_two = 0;

	if (first == NULL || second == NULL)
		return (NULL);
	level_one = binary_tree_depth(first);
	level_two = binary_tree_depth(second);
	while (level_one > level_two)
	{
		first = first->parent;
		level_one = level_one - 1;
	}
	while (level_two > level_one)
	{
		second = second->parent;
		level_two = level_two - 1;
	}
	while (first != NULL && second != NULL)
	{
		if (first == second)
		{
			return ((binary_tree_t *)first);
		}
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}
