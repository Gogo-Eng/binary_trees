#include "binary_trees.h"

/**
 * binary_tree_depth -  measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: return 0 if tree is NULL else returns the node depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node_depth;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	node_depth = binary_tree_depth(tree->parent) + 1;
	return (node_depth);
}
