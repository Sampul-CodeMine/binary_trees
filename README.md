# 0x1D. C - Binary trees

## Learning Objectives

### General

- What is a `binary tree`
- What is the difference between a `binary tree` and a `Binary Search Tree`
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md file`, at the root of the folder of the project, is mandatory
- Your code should use the `Betty style`. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the standard library
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `binary_trees.h`
- Don’t forget to push your header file
- All your header files should be include guarded

## What are Binary Trees?

`Binary Trees` are `k-ary k=2` tree data structure in which each node known as the parent node has at most two children referred to as the `left-child` and the `right-child`. A node in a binary tree has three (3) items:

- data item
- address of the left-child
- address of the right-child

### Types of Binary Trees

- **Full Binary Treee:** This is a special type of binary tree in which each parent node has either two or no children node. It is also referred to as a `proper`, `plane`, or `strict` binary tree.
- **Perfect Binary Tree:** This is a binary tree in which all parent nodes have two (2) children and all leaves have the same depth or the same level.
- **Complete Binary Tree:** This is a binary tree in which every level, except possibly the last is completely filled and all nodesin the last level are as far left as possible.
- **Degenerate or Pathological Binary Tree** This is a binary tree that has a single child either to the left or the right.
- **Skewed Binary Tree:** This is a skewed or pathological Binary tree in which the trees are either dominated by the left nodes or the right nodes (either `left-skewed BS` or `right-skewed BS`).
- **Balanced Binary Tree:** This is a type of Binary tree in which the difference betweeb the height of the left and the right subtree for each node is either 1 or 0.

### Binary Tree Representation

A node of a binary tree is represented in C program using a `struct`.

```c
struct node
{
 int data;
 struct node *left;
 struct node *right;
};
```

### Application of a Binary Tree

1. For easy and quick access of data.
2. In router algorithms
3. To implement Head Data Structure.
4. Syntax Trees

### Commone Operations In Binary Trees`

- **Insertion:** Nodes can be inserted into binary trees in between two nodes or after a leaf-node.
- **Deletion:** This is the process of deleting a node from a Binary tree.
- **Traversal:** This is recursively visiting each node in the left and right subtrees of the root. There are 3 ways which are 
  - **Pre-Order Traversal:** In this order, we always visit the current node, next recursively traverse the current node's left subtree and then recursively traverse the current node's right subtree. The parent node must be processed befire any of its child nodes is done.
  - **In-Order Traversal:** In this order, we always recursively traverse the current  node's left subtrees, next we visit the current node and lastly we recursively traverse the current node's right subtree.
  - **Post-Order Traversal:** In this order, we always recursively traverse the current node's left subtree, next we recursively traverse the current node's right subtree and then visit the current node.
- Others includess `Depth-first Traversal` and `Breadth-first Traversal`.

## Binary Search Tree:

This is a data structure that quickly allows us to maintain a sorted list of numbers.

It is called a Binary tree because each tree node has a maximum of 2 children and also called a search tree because it is used to search for a number in `O(log(n))` times.

## AVL Tree

`AVL tree` is a self-balancing binary search tree in which each node maintains extra information called a balance factor whose value is either -1, 0 or +1.
AVL tree got its name after its inventors Georgy Adelson-Velsky and Landis. Balance factor of a node in an AVL tree is the difference between the height of the left subtree and that of the right subtree of that node.