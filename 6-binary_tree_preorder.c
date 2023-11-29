#include "binary_trees.h"

/**
 * binary_tree_preorder - display a tree in pre-order
 * @tree: a pointer to the root of the tree
 * @func: function to execute
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
