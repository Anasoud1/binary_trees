#include "binary_trees.h"

/**
 * binary_tree_uncle - returns the uncle of a given node
 * @node: a pointer to an input given node
 * Return: a pointer to the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	return ((node->parent == node->parent->parent->right) ?
		node->parent->parent->left : node->parent->parent->right);
}
