#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a left child a node in binary tree
 *
 * @parent: pointer to the node to insert the left child
 * @value: integer to store in the new node
 *
 * Return: pointer to newly created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;

	if (parent->left == NULL)
		parent->left = new_node;
	else
	{
		temp = parent->left;
		parent->left = new_node;
		new_node->left = temp;
	}

	return (new_node);
}