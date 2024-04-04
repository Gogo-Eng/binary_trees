#include "binary_trees.h"

/**
 * binary_tree_height - the max number of edges int the tree
 * @tree: Pointer to the root node of the tree to traverse
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_nodes = 0;
	size_t right_nodes = 0;

	if (tree == NULL || (!tree->left && !tree->right))
		return (0);
	left_nodes = binary_tree_height(tree->left) + 1;
	right_nodes = binary_tree_height(tree->right) + 1;

	if (left_nodes > right_nodes)
		return (left_nodes);
	else
		return (right_nodes);

}

