#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm.
 * @list: list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = (*list)->next;
	listint_t *aux_0 = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	while (head != NULL)
	{
		while (head->prev && head->n < head->prev->n)
		{
			if (head->prev->prev)
			{
				aux_0 = head->prev->prev; /* save prev de 4 */
				head->prev->prev->next = head; /* 0 a 1 */
				if (head->next)
				{
					head->next->prev = head->prev;/*2a4 */
					head->prev->next = head->next; /*4a2 */
					head->next = head->prev; /* 1 a 4 */
					head->prev->prev = head; /* 4 a 1 */
					head->prev = aux_0;  /* 1 a 0 */
				}
				else
				{
					head->next = head->prev; /* 1 a 4 */
					head->prev->prev = head; /* 4 a 1 */
					head->prev->next = NULL;
					head->prev = aux_0;  /* 1 a 0 */

				}}
			else
			{
				head->next->prev = head->prev;  /* 2 a 4 */
				head->prev->next = head->next; /* 4 a 2 */
				head->next = head->prev; /* 1 a 4 */
				head->prev->prev = head; /* 4 a 1 */
				head->prev = NULL;
				*list = head;
			}
			print_list(*list);
		}
		head = head->next;
	}}
