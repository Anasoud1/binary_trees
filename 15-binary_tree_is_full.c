#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
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
