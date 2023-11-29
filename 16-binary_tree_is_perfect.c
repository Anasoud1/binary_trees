#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree
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
 * binary_tree_balance - function that measures the balnce factor of a binary
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

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * tree
 * @tree: pointer to the root node of the tree
 * Return: 1 if full otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int f = 0, f_right = 0, f_left = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left)
		f_left += binary_tree_is_full(tree->left);
	if (tree->right)
		f_right += binary_tree_is_full(tree->right);
	if (f_right == 1 && f_left == 1)
		f = 1;
	return (f);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 if perfect otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0)
		return (1);
	return (0);
}
