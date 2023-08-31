#include "binary_trees.h"
/**
 * binary_tree_insert_left - add left node
 * @parent: parent
 * @value: value
 * Return: created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *heynode;

	if (parent == NULL)
		return (NULL);
	heynode = binary_tree_node(parent, value);
	if (heynode == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		heynode->left = parent->left;
		parent->left->parent = heynode;
	}
	parent->left = heynode;
	return (heynode);
}
