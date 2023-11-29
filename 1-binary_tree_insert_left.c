#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a left node
 * @parent: parent where to insert the new node
 * @value: value of the new node
 * Return: a pointer to the new created node or NUL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *lnode = NULL;

	if (!parent)
		return (NULL);

	/* I could have used binary_tree_node instead ! */
	lnode = malloc(sizeof(binary_tree_t));

	if (!lnode)
		return (NULL);

	lnode->n = value;
	lnode->left = NULL;
	lnode->right = NULL;

	if (parent->left != NULL)
	{
		lnode->left = parent->left;
		parent->left->parent = lnode;
	}

	parent->left = lnode;
	lnode->parent = parent;

	return (lnode);
}
