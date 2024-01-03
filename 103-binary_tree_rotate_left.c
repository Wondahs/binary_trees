#include "binary_trees.h"
#include <sys/types.h>

/**
 *
 *
 *
 *
 *
 *
 *
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL, *newRoot = NULL;

	if (!tree)
		return NULL;

	if (tree->right)
	{
		newRoot = tree->right;
		tree->parent = newRoot;
		temp = newRoot->left;
		newRoot->left = tree;
		tree->right = temp;
		temp->parent = temp;

		return newRoot;
	}

	return tree;
}
