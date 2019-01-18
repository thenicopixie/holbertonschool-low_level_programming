#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node, or NULL if node is NULL, parent is
 * NULL, or node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
	{
		if (node->parent->right)
			return (node->parent->right);
		else
			return (NULL);
	}
	else if (node->parent->right == node)
	{
		if (node->parent->left)
			return (node->parent->left);
		else
			return (NULL);
	}
	return (NULL);
}
