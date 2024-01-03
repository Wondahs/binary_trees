#include "binary_trees.h"
#include <sys/types.h>

/**
 *binary_tree_rotate_left - performs a left-rotation on a binary tree
 *@tree: is a pointer to the root node of the tree to rotate
 *
 *
 *Return: pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL, *newRoot = NULL;

	if (!tree || !tree->right)
		return NULL;

	newRoot = tree->right;
	temp = newRoot->left;
	tree->right = newRoot->left;
	if (temp)
		temp->parent = tree;
	newRoot->left = tree;
	newRoot->parent = tree->parent;
	tree->parent = newRoot;
	
	return newRoot;
}
