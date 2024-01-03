#include "binary_trees.h"

/**
 * 
 * 
 * 
 * 
 * 
 * 
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
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
