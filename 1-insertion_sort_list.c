#include "sort.h"

/**
 * insertion_sort_list - function to sort a list using insertion method
 * @list: pointer to a pointer to the head of the list
 * Code by Linus Obura
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current->next;

		while (current->prev != NULL && current->n < current->prev->n)
		{
			prev = current->prev;
			prev->next = current->next;

			if (current->next != NULL)
			{
				current->next->prev = prev;
			}
			current->next = prev;
			current->prev = prev->prev;

			if (prev->prev != NULL)
			{
				prev->prev->next = current;
			}
			else
			{
				*list = current;
			}
			prev->prev = current;
			print_list(*list);
		}
		current = temp;
	}
}
