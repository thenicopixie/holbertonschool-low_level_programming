#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to inser the left-child in
 * @value: the value to store in the new node
 * Return: Pointer to the created left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL, *temp;

	if (parent == NULL)
		return (NULL);

	left_node = malloc(sizeof(binary_tree_t));

	if (!left_node)
		return (NULL);

	left_node->n = value;
	left_node->right = NULL;
	left_node->parent = parent;

	if (parent->left)
	{
		temp = parent->left;
		parent->left = left_node;
		left_node->left = temp;
		temp->parent = left_node;
	}
	else
	{
		parent->left = left_node;
		left_node->left = NULL;
	}
	return (left_node);
}
