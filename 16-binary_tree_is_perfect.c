#include "binary_trees.h"
/**
 * tree_is_perfect - are u perfect dear tree?
 * @tree: tree
 * Return: 0 or 1
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree->left && tree->right)
	{
		left = 1 + tree_is_perfect(tree->left);
		right = 1 + tree_is_perfect(tree->right);
		if (right == left && right != 0 && left != 0)
			return (right);
		return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_is_perfect - are perfect dear tree?
 * @tree: tree
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
		return (0);
	result = tree_is_perfect(tree);
	if (result != 0)
		return (1);
	return (0);
}
