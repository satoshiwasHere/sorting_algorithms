#include "sort.h"

/**
  * bubble_sort - bubble sorting function
  *  @size: size of an array
  * @array: The array to be sorted
  * Return: nil
  */
void bubble_sort(int *array, size_t size)
{
	size_t x = 0, y = 0;
	int temp = 0;

	if (array == NULL || size == 0)
		return;
	for (; x < size - 1; x++)
	{
		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y + 1];
				array[y + 1] = array[y];
				array[y] = temp;
				print_array(array, size);
			}
		}
	}
}
