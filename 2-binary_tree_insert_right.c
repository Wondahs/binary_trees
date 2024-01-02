#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * 
 * 
 * 
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newRight = NULL, *oldRight = NULL;

	if (!parent)
		return (NULL);

	newRight = malloc(sizeof(binary_tree_t));
	if (!newRight)
		return (NULL);
	newRight->parent = parent;
	newRight->n = value;
	newRight->left = NULL;
	newRight->right = NULL;

	if (parent->right)
		oldRight = parent->right;

	parent->right = newRight;
	if (oldRight)
	{
		newRight->right = oldRight;
		oldRight->parent = newRight;
	}
	
	return (newRight);
}
