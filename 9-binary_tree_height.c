#include "binary_trees.h"

/**
 * max - returns the max of two values
 * @a: first value
 * @b: second value
 * Return: int (max value)
 */
size_t max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
 * binary_tree_height - returns the height of a tree
 * @tree: a pointer to the root of the tree
 * Return: size_t (the value of height)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (0);

	return (1 + max(binary_tree_height(tree->right),
				binary_tree_height(tree->left)));
}
