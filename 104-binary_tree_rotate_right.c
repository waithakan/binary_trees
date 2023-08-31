#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: pointer to the root node
 * Return: a pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *nroot;

	if (!tree)
		return (NULL);

	tree->parent = tree->left;
	nroot = tree->parent;
	tree->left = nroot->right;
	nroot->right = tree;
	nroot->parent = NULL;
	if (tree->left)
		tree->left->parent = tree;
	return (nroot);
}
