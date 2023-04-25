#include "sort.h"

/**
 * quick_sort - sorts an array of integers
 * @array: array of integers
 * @size: size of array
 * Return: nil
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	quick_s(array, 0, size - 1, size);
}

/**
 * partition - array subset order
 * @array: array of integers
 * @hi: high
 * @lo: low
 * @size: size of array
 * Return: s
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int s = lo - 1, l = lo;
	int pivot = array[hi], curr = 0;

	for (; l < hi; l++)
	{
		if (array[l] < pivot)
		{
			s++;
			if (array[s] != array[l])
			{
				curr = array[s];
				array[s] = array[l];
				array[l] = curr;
				print_array(array, size);
			}
		}
	}
	if (array[s + 1] != array[hi])
	{
		curr = array[s + 1];
		array[s + 1] = array[hi];
		array[hi] = curr;
		print_array(array, size);
	}
	return (s + 1);
}

/**
 * quick_s - quick sort
 * @array: array of in
 * @lo: low
 * @hi:high
 * @size: size of array
 * Return: nil
 */
void quick_s(int *array, int lo, int hi, size_t size)
{
	int pivot;

	if (lo < hi)
	{
		pivot = partition(array, lo, hi, size);
		quick_s(array, lo, pivot - 1, size);
		quick_s(array, pivot + 1, hi, size);
	}
}
