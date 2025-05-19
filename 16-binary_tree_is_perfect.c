#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height, left_perfect, right_perfect;

	if (tree == NULL)
		return (0);
	/* If it's a leaf (no children), it's perfect */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/* If it has only one child, it's not perfect */
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	/* Check the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	left_perfect = binary_tree_is_perfect(tree->left);
	right_perfect = binary_tree_is_perfect(tree->right);
	/* Perfect if heights match and both subtrees are perfect */
	return (left_height == right_height && left_perfect && right_perfect);
}
