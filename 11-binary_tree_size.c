#include "binary_trees.h"
/**
 * binary_tree_size - how big are u tree?
 * @tree: tree
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, right = 0, left = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	size = right + left + 1;
	return (size);
}
