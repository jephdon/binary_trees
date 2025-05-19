#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle of
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	/* Check if node, parent, or grandparent is NULL */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	grandparent = node->parent->parent;
	/* If arent is the left child, uncleis the right child */
	if (grandparent->left == node->parent)
		return (grandparent->right);
	/* If parent is the right child, uncle is the left child */
	if (grandparent->right == node->parent)
		return (grandparent->left);
	/* return NULL if something is off */
	return (NULL);
}
