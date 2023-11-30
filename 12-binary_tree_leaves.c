#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves of a tree
 * @tree: a pointer to the root of the tree
 * Return: size_t (number of leaves)
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
