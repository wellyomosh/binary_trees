#include "binary_trees.h"

/**
 * binary_tree_sibling - returns the sibling of a node
 * @node: a pointer to a node
 *
 * Return: a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;


	if (!node || !node->parent)
		return (NULL);
	parent = node->parent;
	if (parent->left == node && parent->right)
		return (parent->right);
	else if (parent->right == node && parent->left)
		return (parent->left);
	return (NULL);
}
