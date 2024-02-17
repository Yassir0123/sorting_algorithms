#include "sort.h"
/**
* selection_sort - Sorts an array using the selection sort algorithm
* @array: The array to be sorted
* @size: Number of elements in the array
*/
void selection_sort(int *array, size_t size)
{
if (array == NULL)
return;
size_t i = 0, c, l, t, s;
while (i < size)
{
c = i;
l = i;
while (c < size)
{
if (array[c] < array[l])
{
l = c;
s = 1;
}
c++;
}
if (s == 1)
{
t = array[l];
array[l] = array[i];
array[i] = t;
print_array(array, size);
s = 0;
}
i++;
}
}
