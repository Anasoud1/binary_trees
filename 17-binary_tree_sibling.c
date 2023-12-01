#include "binary_trees.h"

/**
 * binary_tree_sibling - returns a pointer to the sibling of a given node
 * @node: a pointer to the input node
 * Return: a pointer to the sibling of the given input node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return ((node->parent->left == node) ?
		node->parent->right : node->parent->left);
}
