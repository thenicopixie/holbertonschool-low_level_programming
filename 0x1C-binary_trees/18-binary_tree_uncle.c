#include "binary_trees.h"
/**
 * binary_tree_uncle - find the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: uncle node, else NULL if node is NULL or node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	node->parent->parent == NULL)
		return (NULL);
	if ((node->parent->parent->left->left == node)
	|| (node->parent->parent->left->right == node))
	{
		if (node->parent->parent->right)
			return (node->parent->parent->right);
		else
			return (NULL);
	}
	else if ((node->parent->parent->right->left == node)
	|| (node->parent->parent->right->right == node))
	{
		if (node->parent->parent->left)
			return (node->parent->parent->left);
		else
			return (NULL);
	}
	return (NULL);
}
