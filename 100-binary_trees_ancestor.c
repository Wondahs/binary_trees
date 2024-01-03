#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 *
 * Return: Lowest common ancestor
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
										const binary_tree_t *second)
{
	binary_tree_t *hare = NULL, *tortoise = NULL;

	if (!first || !second)
		return (NULL);

	tortoise = (binary_tree_t *)first;

	while (tortoise)
	{
		hare = (binary_tree_t *)second;
		while (hare)
		{
			if (hare == tortoise)
				return hare;
			hare = hare->parent;
		}
		tortoise = tortoise->parent;
	}

	return (NULL);
}
