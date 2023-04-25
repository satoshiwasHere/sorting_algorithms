#include "sort.h"

/**
 * selection_sort - algorithm for sorting an array into ascending order
 * @array: integer array
 * @size: array size
 * Return: nil.
 */
void selection_sort(int *array, size_t size)
{
	size_t k = 0, v = 0, pos = 0;

	if (array == NULL || size == 0)
		return;

	for (; k < size - 1; k++)
	{
		pos = k;
		for (v = k + 1; v < size; v++)
		{
			if (array[v] < array[pos])
				pos = v;
		}
		if (pos != k)
		{
			array[k] ^= array[pos];
			array[pos] ^= array[k];
			array[k] ^= array[pos];
			print_array(array, size);
		}
	}
}

