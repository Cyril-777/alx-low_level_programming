#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	int step = sqrt(size);
	int prev = 0;

	while (array[step] < value && step < size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);

		if (prev >= size)
			return (-1);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, step);

	while (array[prev] < value && prev < size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;

		if (prev == (step + 1))
			return (-1);
	}

	if (array[prev] == value)
		return (prev);

	return (-1);
}
