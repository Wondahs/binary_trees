#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: is a pointer to the root node
 * of the tree to count the number of leaves
 *
 *
 *
 * Return: No of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left = 0, right = 0, leaf = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	leaf = left + right;

	return (!tree->left && !tree->right ? leaf + 1 : leaf);
}
