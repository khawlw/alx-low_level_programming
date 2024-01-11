#include "lists.h"

/**
 * ree_dlistint - frees a dlist
 * @head: pointer to curent head node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
