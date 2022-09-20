#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to a node
 *
 * Return: a pointer to the uncle node, Null otherwise
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand;

	if (!node)
		return (NULL);
	grand = node->parent->parent;
	if (node->parent && grand && grand->left == node->parent)
		return (grand->right);
	else if (node->parent && grand && grand->right == node->parent)
		return (grand->left);
	return (NULL);
}
