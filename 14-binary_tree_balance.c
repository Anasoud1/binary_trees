#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_right = 0, h_left = 0;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left)
		h_left = binary_tree_height(tree->left) + 1;
	if (tree->right)
		h_right = binary_tree_height(tree->right) + 1;
	if (h_left > h_right)
		return (h_left);
	return (h_right);
}

/**
 * binary_tree_balance - function that measures the balance factor of a binary
 * tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left = 0, h_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	if (tree->left)
		h_left = binary_tree_height(tree->left) + 1;
	if (tree->right)
		h_right = binary_tree_height(tree->right) + 1;
	return (h_left - h_right);
}
