#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: return 0 if tree is NULL else returns the size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes, tree_size;

	if (!tree)
		return (0);

	left_nodes = binary_tree_size(tree->left);
	right_nodes = binary_tree_size(tree->right);

	tree_size = left_nodes + right_nodes + 1;
	return (tree_size);
}

