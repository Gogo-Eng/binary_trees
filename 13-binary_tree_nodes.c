#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: returns the number of nodes with at least 1 child
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t total_nodes, left_node, right_node;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	left_node = binary_tree_nodes(tree->left);
	right_node = binary_tree_nodes(tree->right);

	total_nodes = left_node + right_node + 1;

	return (total_nodes);
}
