#include "search_algos.h"

/**
 * binary_search - function to perform binary search
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index of value on success, - on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, mid;
	size_t r = size - 1;

	if (!array)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (mid = l; mid < r; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);
		mid = (l + r) / 2;
		if (array[mid] < value)
			l = mid + 1;
		else if (array[mid] > value)
			r = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
