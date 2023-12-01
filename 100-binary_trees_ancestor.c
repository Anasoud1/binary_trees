#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the LCA of two given nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: pointer of LCA if any, NULL otherwise
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *f = (binary_tree_t *)first, *s = (binary_tree_t *)second;

	while (f)
	{
		while (s)
		{
			if (s == f)
				return (f);
			s = s->parent;
		}
		s = (binary_tree_t *) second;
		f = f->parent;
	}
	return (NULL);
}
