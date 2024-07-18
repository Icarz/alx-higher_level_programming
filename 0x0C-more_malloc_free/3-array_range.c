#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value (inclusive)
 * @max: maximum value (inclusive)
 *
 * Return: pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
int *arr;
int i, size;

/* Check if min > max */
if (min > max)
return (NULL);
/* Calculate size of the array */
size = max - min + 1;
/* Allocate memory for the array */
arr = malloc(sizeof(int) * size);
if (arr == NULL)
return (NULL);
/* Fill the array with values from min to max */
for (i = 0; i < size; i++)
{
arr[i] = min;
min++;
}
return (arr);
}
