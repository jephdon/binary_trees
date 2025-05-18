#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one
 * child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: The number of nodes with at least one child, or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	if (tree == NULL)
		return (0);
	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);
/* If this node has at least one child, count it by adding 1 */
	if (tree->left != NULL || tree->right != NULL)
		return (left_nodes + right_nodes + 1);
	else
		return (left_nodes + right_nodes);
}
