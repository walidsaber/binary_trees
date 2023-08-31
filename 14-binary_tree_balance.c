#include "binary_trees.h"

/**
 * binary_tree_height_b - height tree
 * @tree: tree
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree)
	{
		left = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
		right = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
	}
	return ((left > right) ? left : right);
}

/**
 * binary_tree_balance - Measures balance
 * @tree: tree
 * Return: tot
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree == NULL)
		return (0);
	left = ((int)binary_tree_height_b(tree->left));
	right = ((int)binary_tree_height_b(tree->right));
	total = left - right;
	return (total);
}
