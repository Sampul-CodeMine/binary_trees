#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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

/* Binary Tree Type Definition */
typedef struct binary_tree_s binary_tree_t;

/* Binary Search Tree Type Definition */
typedef struct binary_tree_s bst_t;

/* AVL Tree Type Definition */
typedef struct binary_tree_s avl_t;

/* Max binary Heap Type Definition */
typedef struct binary_tree_s heap_t;

/* Print the Binary Tree */
void binary_tree_print(const binary_tree_t *);

/* BINARY TREE */
/* Create New Node */
binary_tree_t *binary_tree_node(binary_tree_t *, int);

/* Insert New Node Left */
binary_tree_t *binary_tree_insert_left(binary_tree_t *, int);

/* Insert New Node Right*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *, int);

/* Delete an entire Binary Tree */
void binary_tree_delete(binary_tree_t *);

/* Check if node is a leaf */
int binary_tree_is_leaf(const binary_tree_t *);

/* Check if a node is a root */
int binary_tree_is_root(const binary_tree_t *);

/* Pre-Order Traversal */
void binary_tree_preorder(const binary_tree_t *, void (*func)(int));

/* In-Order Traversal */
void binary_tree_inorder(const binary_tree_t *, void (*func)(int));

/* Post-Order Traversal */
void binary_tree_postorder(const binary_tree_t *, void (*func)(int));

/* Getting the Height of the Binary Tree */
size_t binary_tree_height(const binary_tree_t *);

/* Getting the Depth of the Binary Tree */
size_t binary_tree_depth(const binary_tree_t *);

/* Getting the size of a Binary Tree */
size_t binary_tree_size(const binary_tree_t *);

/* Counting the number of leaves in a Binary Tree */
size_t binary_tree_leaves(const binary_tree_t *);

/* Count node with a least one child */
size_t binary_tree_nodes(const binary_tree_t *);

/* Check if the binary tree is balanced. */
int binary_tree_balance(const binary_tree_t *);

/* Parent Sibling of a current node's parent */
binary_tree_t *binary_tree_uncle(binary_tree_t *);

/* Check if the tree is perfect */
int binary_tree_is_perfect(const binary_tree_t *);

/* Find the sibling of a node */
binary_tree_t *binary_tree_sibling(binary_tree_t *);

/* If Binary tree is full */
int binary_tree_is_full(const binary_tree_t *);

/* Uncle of the Binary Tree Node */
binary_tree_t *binary_tree_uncle(binary_tree_t *);

#endif /* BINARY_TREES_H */
