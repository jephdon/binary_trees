#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using
 * post-order traversal
 * @tree: Pointer to the root node of the tree to travers
 * @func: Pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func); /* Visit left subtree */
	binary_tree_postorder(tree->right, func); /* right sub_tree */
	func(tree->n); /* Process current node */
}
