#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func); /* Traverse the left */
	func(tree->n); /* Visit the current node */
	binary_tree_inorder(tree->right, func); /* Traversse right */
}
