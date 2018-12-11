#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in a binary tree
 * @tree: pointer to node to measure depth
 * Return: 0 if tree is NULL, or depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
