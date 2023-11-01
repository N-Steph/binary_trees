#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *left_child, *right_child;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	left_child = node->parent->left;
	right_child = node->parent->right;
	if (left_child == node)
		return (right_child);
	return (left_child);
}
