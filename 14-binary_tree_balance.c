#include "binary_trees.h"

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
	/* Calculate the height of the subtrees if they exist */
	if (tree->left != NULL)
		left_height = binary_tree_balance(tree->left) + 1;
	if (tree->right != NULL)
		right_height = (int)binary_tree_balance(tree->right) + 1;
	return (left_height - right_height);
}
