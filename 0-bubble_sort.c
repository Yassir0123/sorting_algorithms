#include "sort.h"
/**
 * bubble_sort - Sorts sort
 * @array: The arra
 * @size: Num
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int r = 0;
if (array == NULL)
return;
for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
r = array[j];
array[j] = array[j + 1];
array[j + 1] = r;
print_array(array, size);
}
}
}
}
