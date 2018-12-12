#include "binary_trees.h"

/**
 * binary_tree_is_root - check is a node is the root
 * @node: pointer to the node to check
 * Return: 1 is node is root, otherwise 0. Return 0 is node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	else
		return (1);
}
