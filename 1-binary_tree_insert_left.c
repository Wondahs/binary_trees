#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * 
 * 
 * 
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newLeft = NULL, *oldLeft = NULL;

	if (!parent)
		return (NULL);

	newLeft = malloc(sizeof(binary_tree_t));
	if (!newLeft)
		return (NULL);
	newLeft->parent = parent;
	newLeft->n = value;
	newLeft->left = NULL;
	newLeft->right = NULL;

	if (parent->left)
		oldLeft = parent->left;

	parent->left = newLeft;
	if (oldLeft)
	{
		newLeft->left = oldLeft;
		oldLeft->parent = newLeft;
	}
	
	return (newLeft);
}
