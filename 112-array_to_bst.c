#include "binary_trees.h"
/**
 * array_to_bst - bst
 * @array: array
 * @size: size
 * Return: BST
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i = 0;
	bst_t *root;

	root = NULL;
	if (size == 0)
		return (NULL);
	for (; i < size; i++)
	{
		if (i == 0)
			bst_insert(&root, array[i]);
		else
			bst_insert(&root, array[i]);
	}
	return (root);
}
