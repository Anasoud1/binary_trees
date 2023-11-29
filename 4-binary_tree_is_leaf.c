#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks whether a node is a leaf or not
 * @node : a pointer to check
 * Return: int (1 if node is leaf, 0 otherwise)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
