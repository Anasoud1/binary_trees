#include "binary_trees.h"

/**
 * binary_tree_node - creates a new node without children
 * @parent: parent of the node to be created
 * @value: value of the node to be created
 * Return: a pointer to the node or NULL if it fails
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
