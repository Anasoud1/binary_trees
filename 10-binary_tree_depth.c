#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * @tree: pointer to the root node of the tree
 * Return: depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
		return (0);
	if (tree->parent == NULL)
		return (0);
	d = binary_tree_depth(tree->parent) + 1;
	return (d);
}
