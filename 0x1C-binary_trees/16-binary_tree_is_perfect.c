#include "binary_trees.h"
/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, else 0 if not perfect or tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, leaves = 0, num = 1;

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	leaves = binary_tree_leaves(tree);
	while (height > 0)
	{
		num *= 2;
		height--;
	}
	if (leaves == num)
		return (1);
	return (0);
}

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: if tree is NULL return 0, else return the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	if (left > right)
		return (left);
	else
		return (right);
}
/**
 * binary_tree_leaves - count the leave in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (leaves);
}
