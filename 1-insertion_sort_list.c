#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 * @list: pointer to the list that need to be sorted.
 *
 * Return: void, no return.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *inset_node, *temp;

	if (*list == NULL || list == NULL || (*list)->next == NULL)
	{
		return;
	}

	for (current = (*list)->next; current != NULL; current = temp)
	{
		temp = current->next;
		inset_node = current->prev;

		while (inset_node != NULL && current->n < inset_node->n)
		{
			inset_node->next = current->next;

			if (current->next != NULL)
			{
				current->next->prev = inset_node;
			}

			current->prev = inset_node->prev;
			current->next = inset_node;

			if (inset_node->prev != NULL)
			{
				inset_node->prev->next = current;
			}
			else
			{
				*list = current;
			}

			inset_node->prev = current;
			inset_node = current->prev;
			print_list(*list);
		}
	}
}

