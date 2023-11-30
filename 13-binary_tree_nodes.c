#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes in a given tree
 * @tree: a pointer to the root of the tree
 * Return: size_t (number of nodes)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->right && !tree->left))
		return (0);
	return (1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
}
