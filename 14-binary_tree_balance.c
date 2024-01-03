#include "binary_trees.h"

/**
 * binary_tree_height_bal - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 *
 * Return: Height of tree
 *
*/
size_t binary_tree_height_bal(const binary_tree_t *tree)
{
	size_t right_height = 0, left_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height_bal(tree->left) : 1;
	right_height = tree->right ? 1 + binary_tree_height_bal(tree->right) : 1;

	return (left_height > right_height ? left_height : right_height);
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: is a pointer to the root node
 * of the tree to measure the balance factor
 *
 * Return: Balance factor
 *
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (tree == NULL)
		return (0);

	left = (int)binary_tree_height_bal(tree->left);
	right = (int)binary_tree_height_bal(tree->right);

	return (left - right);
}
