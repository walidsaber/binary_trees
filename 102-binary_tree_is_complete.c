#include "binary_trees.h"
/**
 * new_node - new node
 * @node: pointer
 * Return: node
 */
link_t *new_node(binary_tree_t *node)
{
	link_t *new;

	new =  malloc(sizeof(link_t));
	if (new == NULL)
		return (NULL);
	new->node = node;
	new->next = NULL;
	return (new);
}
/**
 * free_q - Function
 * @head: Node
 */
void free_q(link_t *head)
{
	link_t *hold;

	while (head)
	{
		hold = head->next;
		free(head);
		head = hold;
	}
}
/**
 * _push - push
 * @node: pointer
 * @head: head
 * @tail: tail
 */
void _push(binary_tree_t *node, link_t *head, link_t **tail)
{
	link_t *hold;

	hold = new_node(node);
	if (hold == NULL)
	{
		free_q(head);
		exit(1);
	}
	(*tail)->next = hold;
	*tail = hold;
}
/**
 * _pop - Function
 * @head: head
 */
void _pop(link_t **head)
{
	link_t *hold;

	hold = (*head)->next;
	free(*head);
	*head = hold;
}
/**
 * binary_tree_is_complete - Function
 * @tree: pointer
 * Return: 1 or 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	link_t *head, *tail;
	int flag = 0;

	if (tree == NULL)
		return (0);
	head = tail = new_node((binary_tree_t *)tree);
	if (head == NULL)
		exit(1);
	while (head != NULL)
	{
		if (head->node->left != NULL)
		{
			if (flag == 1)
			{
				free_q(head);
				return (0);
			}
			_push(head->node->left, head, &tail);
		}
		else
			flag = 1;
		if (head->node->right != NULL)
		{
			if (flag == 1)
			{
				free_q(head);
				return (0);
			}
			_push(head->node->right, head, &tail);
		}
		else
			flag = 1;
		_pop(&head);
	}
	return (1);
}
