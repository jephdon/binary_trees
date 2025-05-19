#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 * @node: Pointer to the node to find the sibling of
 *
 * Return: Pointer to the sibling nnode, or NULL if no sibling exists
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	/* If node is the left child, return the right child */
	if (parent->left == node)
		return (parent->right);
	/* If node is the right child, return the left child */
	if (parent->right == node)
		return (parent->left);
	/* if neither, return NULL */
	return (NULL);
}
