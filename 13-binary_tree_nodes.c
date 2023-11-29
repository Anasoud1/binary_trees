#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least 1
 * child in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_left = 0, count_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left)
		count_left = binary_tree_nodes(tree->left) + 1;
	if (tree->right)
		count_right = binary_tree_nodes(tree->right) + 1;
	if (tree->right && tree->left)
		return (count_left + count_right - 1);
	return (count_left + count_right);
}
