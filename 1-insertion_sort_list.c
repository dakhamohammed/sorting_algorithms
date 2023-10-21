#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers in ascending order
 * using the Insertion sort algorithm.
 * @list: pointer to the list that need to be sorted.
 *
 * Return: void, no return.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t *current_node;
	listint_t *next_node;

	if (*list == NULL || (*list)->next == NULL)
	{
		return;
	}

	current_node = *list;

	while (current_node != NULL)
	{
		next_node = current_node->next;

		while (sorted != NULL && sorted->n < current_node->n)
		{
			sorted = sorted->next;
		}

		if(sorted == NULL)
		{
			current_node->prev = sorted->prev;
			current_node->next = NULL;
			sorted->next = current_node;
		}
		else if (sorted->prev == NULL)
		{
			// TODO: Open Clion 2023.2.2 IDE and continue.
		}

		current_node = next_node;
	}
}

