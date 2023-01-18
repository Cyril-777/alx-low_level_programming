#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter
 * @array: arr
 * @size: size
 * @action: ptr to func
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !action)
		return;

	for (i = 0; i < (int) size; i++)
		action(array[i]);
}
