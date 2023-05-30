#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

/* binary tree */
typedef struct binary_tree_s binary_tree_t;

/* Print the Binary Tree */
int print_t(const binary_tree_t *, int, int, char **);
size_t _height(const binary_tree_t *);
void binary_tree_print(const binary_tree_t *);



/* binary search tree */
typedef struct binary_tree_s bst_t;

/* AVL tree */
typedef struct binary_tree_s avl_t;

/* Max binary Heap */
typedef struct binary_tree_s heap_t;

/* Binary Tree - New Node */
binary_tree_t *binary_tree_node(binary_tree_t *, int);









#endif /* BINARY_TREES_H */