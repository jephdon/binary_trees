#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure height
 *
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	/* If it's a leaf, height is 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	/* Measure the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	/* Return the taller subtree's height plus 1 */
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
