#include "lists.h"

/**
 * reverse_listint -this comment is meant to reverses a linked list
 * @head: this comment represents the pointer to the first node in the list
 * Return: this comment returns pointer to point to the new node of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	listint_t *next = NULL;


	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;

		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
