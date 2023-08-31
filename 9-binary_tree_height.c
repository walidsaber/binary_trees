#include "binary_trees.h"

/**
 * binary_tree_height - how tall are u tree?
 * @tree: tree
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	}
	return ((left > right) ? left : right);
}
