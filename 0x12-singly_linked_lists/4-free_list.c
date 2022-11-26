#include "list.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *storeCopy;

	while (head)
	{
		storeCopy = head->next;

		free(head->str);
		free(head);
		head = storeCopy;
	}
	free(head);
}
