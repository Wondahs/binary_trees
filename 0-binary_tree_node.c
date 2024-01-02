#include "binary_trees.h"

/**
 * binary_tree_node -  creates a binary tree node.
 * @parent: Parent node
 * @value: Node value
 * 
 * Return: New node, or NULL if failed.
 */
 binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
 {
	binary_tree_t *newNode;

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
 }