#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if the binary tree node is a leaf
 * @node: a pointer to node to check
 *
 * Return: 1 if the node is leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->right || node->left)
	{
		return (0);
	}
	return (1);
}
