#include "binary_trees.h"

/**
 * binary_tree_node - function to create a newnode for a binary tree
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: returns a pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
