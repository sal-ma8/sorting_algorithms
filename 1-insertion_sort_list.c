#include "sort.h"

/**
 * spnod - fdgfsd
 * @h: fsvbfb
 * @n1: fb
 * @n2: fdbsb
 */
void spnod(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - dfavdv
 * @list: sdvasv
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *re, *hot, *mo;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (re = (*list)->next; re != NULL; re = mo)
	{
		mo = re->next;
		hot = re->prev;
		while (hot != NULL && re->n < hot->n)
		{
			spnod(list, &hot, re);
			print_list((const listint_t *)*list);
		}
	}
}
