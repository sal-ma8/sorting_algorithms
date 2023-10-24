#include "sort.h"

/**
 * swpin - defwef
 * @a: dsaff
 * @b: asdfv.
 */
void swpin(int *a, int *b)
{
	int mo;

	mo = *a;
	*a = *b;
	*b = mo;
}

/**
 * selection_sort - KNSDFJKNKAE
 * @array: dFAF
 * @size: asdaf
 */
void selection_sort(int *array, size_t size)
{
	int *r;
	size_t ha, sa;

	if (array == NULL || size < 2)
		return;

	for (ha = 0; ha < size - 1; ha++)
	{
		r = array + ha;
		for (sa = ha + 1; sa < size; sa++)
			r = (array[sa] < *r) ? (array + sa) : r;

		if ((array + ha) != r)
		{
			swpin(array + ha, r);
			print_array(array, size);
		}
	}
}
