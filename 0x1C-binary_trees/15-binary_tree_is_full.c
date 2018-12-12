#include "binary_trees.h"

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 ig full or 0 is not full or tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_is_full(tree->left);
	if (tree->right)
		right = 1 + binary_tree_is_full(tree->right);
	if ((left - right) == 0)
		return (1);
	return (0);
}
