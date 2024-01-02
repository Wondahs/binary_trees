#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: is a pointer to the root node of the tree to count the number of nodes
 * 
 * 
 * Return: No of nodes with at least 1 child
 * 
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0, right = 0, leaf = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	leaf = left + right;

	return (tree->left || tree->right ? leaf + 1 : leaf);
}
