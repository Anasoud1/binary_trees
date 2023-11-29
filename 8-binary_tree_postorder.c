#include "binary_trees.h"

/**
 * binary_tree_postorder - displays a tree in post order
 * @tree : a pointer to the root of the tree
 * @func : function to be executed
 * Return: void (NOTHING)
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
