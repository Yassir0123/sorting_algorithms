#include "sort.h"
/**
* shota - Pa quicksort
* @array: Arrayioned
* @first: Firstarray
* @last: Last in array
* @size: Size ofrray
*
* Return: Index of the pivot element
*/
int shota(int *array, int first, int last, size_t size)
{
int i, j, temp;
if (!array || first < 0 || last < 0 || first >= last)
return (-1);
i = first - 1;
j = first;
while (j <= last - 1)
{
if (array[j] < array[last])
{
i++;
if (i < j)
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size);
}
}
j++;
}
if (array[i + 1] > array[last])
{
temp = array[i + 1];
array[i + 1] = array[last];
array[last] = temp;
print_array(array, size);
}
return (i + 1);
}
/**
* tomboy - sgers recursively
* @array: ar sort
* @first: fiition
* @last: lasion
* @size: arrsize
*/
void tomboy(int *array, int first, int last, size_t size)
{
int rnd;
if (first < last)
{
rnd = shota(array, first, last, size);
tomboy(array, first, rnd - 1, size);
tomboy(array, rnd + 1, last, size);
}
}
/*
* quick_sort - tiiririr
* @array: rruurur
* @size: ieieieie
*/
void quick_sort(int *array, size_t size)
{
tomboy(array, 0, size - 1, size);
}
