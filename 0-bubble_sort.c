#include "sort.h"

/**
 * swapun- to change two varible place.
 * @a: The first v to swap.
 * @b: The second v to swap.
 */
void swapun(int *a, int *b)
{
	int moo;

	moo = *a;
	*a = *b;
	*b = moo;
}

/**
 * bubble_sort - this function to sort
 * @array: vp1.
 * @size: vp2.
 */
void bubble_sort(int *array, size_t size)
{
	size_t h, sa = size;
	bool bbb = false;

	if (array == NULL || size < 2)
		return;

	while (bbb == false)
	{
		bbb = true;
		for (h = 0; h < sa - 1; h++)
		{
			if (array[h] > array[h + 1])
			{
				swapun(array + h, array + h + 1);
				print_array(array, size);
				bbb = false;
			}
		}
		sa--;
	}
}
