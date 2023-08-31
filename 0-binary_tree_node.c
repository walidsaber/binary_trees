#include "binary_trees.h"

/**
 * binary_tree_node - binary creation
 * @parent: main node
 * @value: value
 * Return: up_node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *up_node;

	up_node = malloc(sizeof(binary_tree_t));
	if (up_node == NULL)
	{
		return (NULL);
	}
	up_node->n = value;
	up_node->parent = parent;
	up_node->left = NULL;
	up_node->right = NULL;
	return (up_node);
}
