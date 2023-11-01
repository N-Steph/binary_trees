#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node -  create a new node in a binary tree
 *
 * @parent: pointer to parent node of new node
 * @value: integer to store in new node
 *
 * Return: pointer to newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}
