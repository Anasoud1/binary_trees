#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node as right child to parent
 * @parent: pointer to the parent where to insert the new node
 * @value: value of the new node
 * Return: a pointer to the new created node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rnode = NULL;

	if (!parent)
		return (NULL);

	rnode = binary_tree_node(parent, value);

	if (!rnode)
		return (NULL);

	if (parent->right != NULL)
	{
		rnode->right = parent->right;
		parent->right->parent = rnode;
	}

	parent->right = rnode;

	return (rnode);
}
