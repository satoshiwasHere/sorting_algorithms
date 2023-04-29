#include "sort.h"

/**
  * shell_sort - sorts an array of int in ascending order,
  * using Shell sort algorithm
  *
  * @array: The array in question
  * @size: size of arry.
  * Return: Null
  */
void shell_sort(int *array, size_t size)
{
	int aux = 0;
	unsigned int x = 0, y = 0, gap = 0;

	if (array == NULL || size < 2)
		return;

	while (gap < size)
		gap = gap * 3 + 1;

	for (; gap > 0; gap = gap / 3)
	{
		for (x = gap; x < size; x++)
		{
			aux = array[x];
			for (x = y; x >= gap && array[y - gap] > aux;
					y -= gap)
			{
				if (array[y] != array[y - gap])
					array[y] = array[y - gap];
			}
			if (array[y] != aux)
				array[y] = aux;

		}
		print_array(array, size);
	}
}
