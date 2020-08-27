#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function to perform jump search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: index of value on success, -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (!array)
		return (-1);

	while (step < size && array[step] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
		if (array[prev])
			printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
			prev++;
	}

	return (-1);
}
