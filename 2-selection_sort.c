#include "sort.h"
/**
* selection_sort - Sortsorithm
* @array: The array t
* @size: lements in the array
*/
void selection_sort(int *array, size_t size)
{
size_t i = 0, j, m, t;
if (!array || size < 2)
return;
while (i < size - 1)
{
m = i;
for (j = i + 1; j < size; ++j)
{
if (array[j] < array[m])
m = j;
}
if (m != i)
{
t = array[i];
array[i] = array[m];
array[m] = t;
print_array(array, size);
}
++i;
}
}
