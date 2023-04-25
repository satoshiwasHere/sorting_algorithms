#include "sort.h"
/**
 * insertion_sort_list - alogrthmic function sorting 
 *     double linked list.
 *                       
 * @list: doubly linked list pointer
 * Return: null
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr = NULL, *tmp = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr = *list;
	curr = curr->next;
	while (curr)
	{
		while (curr->prev && curr->n < (curr->prev)->n)
		{
			tmp = curr->prev;
			tmp->next = curr->next;
			if (curr->next)
				(curr->next)->prev = tmp;
			curr->prev = tmp->prev;
			curr->next = tmp;
			if (tmp->prev)
				(tmp->prev)->next = curr;
			tmp->prev = curr;
			if (curr->prev == NULL)
				*list = curr;
			print_list(*list);
		}
		curr = curr->next;
	}
}
