#include "binary_trees.h"

/**
 * binary_tree_is_full - checks whether a tree is full or not
 * @tree: a pointer to the root of the tree
 * Return: int (1 if it's full, 0 otherwise)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

}
