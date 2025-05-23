#include "binary_trees.h"

/**
 * binary_tree_height_adjusted - Measures the height of a binary
 * tree, with height (NULL) = -1
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, or -1 if tree is NULL
 */
int binary_tree_height_adjusted(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (-1);
	left_height = binary_tree_height_adjusted(tree->left);
	right_height = binary_tree_height_adjusted(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height_adjusted(tree->left);
	right_height = binary_tree_height_adjusted(tree->right);
	return (left_height - right_height);
}
