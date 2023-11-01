#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: pointer to the node to find the unclde
 *
 * Return: pointer to the uncle node or NULL for failure
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent, *parent, *parent_sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	grand_parent = node->parent->parent;
	parent = node->parent;
	parent_sibling = grand_parent->left;
	if (parent_sibling == parent)
		return (grand_parent->right);
	return (parent_sibling);
}
