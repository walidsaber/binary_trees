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
/**
 * binary_tree_depth - depth of tree
 * @tree: node
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
/**
 * linked_node - linked node
 * @head: pointer
 * @tree: node
 * @level: depth
 * Return: v
 */
void linked_node(link_t **head, const binary_tree_t *tree, size_t level)
{
	link_t *new, *aux;

	new = malloc(sizeof(link_t));
	if (new == NULL)
		return;
	new->n = level;
	new->node = tree;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		aux = *head;
		while (aux->next != NULL)
			aux = aux->next;
		new->next = NULL;
		aux->next = new;
	}
}
/**
 * recursion - loop
 * @head: pointer
 * @tree: node
 * Return: v
 */
void recursion(link_t **head, const binary_tree_t *tree)
{
	size_t level = 0;

	if (tree == NULL)
		return;
	level = binary_tree_depth(tree);
	linked_node(head, tree, level);
	recursion(head, tree->left);
	recursion(head, tree->right);
}
/**
 * binary_tree_levelorder - order
 * @tree: root
 * @func: function
 * Return: v
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	link_t *head, *aux;
	size_t height = 0, count = 0;

	if (!tree || !func)
		return;
	height = binary_tree_height(tree);
	head = NULL;
	recursion(&head, tree);
	while (count <= height)
	{
		aux = head;
		while (aux != NULL)
		{
			if (count == aux->n)
				func(aux->node->n);
			aux = aux->next;
		}
		count++;
	}
	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
