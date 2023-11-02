#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary_tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;
	binary_tree_t *left_subtree, *right_subtree;

	left_size = 0;
	right_size = 0;
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	left_subtree = tree->left;
	left_size += binary_tree_size(left_subtree);
	right_subtree = tree->right;
	right_size += binary_tree_size(right_subtree);
	return (left_size + right_size + 1);
}
