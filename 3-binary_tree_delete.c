#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left_subtree, *right_subtree;

	if (tree == NULL)
		return;
	if (tree->left == NULL && tree->right == NULL)
	{
		free(tree);
		return;
	}
	left_subtree = tree->left;
	binary_tree_delete(left_subtree);
	right_subtree = tree->right;
	binary_tree_delete(right_subtree);
	free(tree);
}
