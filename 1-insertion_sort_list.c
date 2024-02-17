#include "sort.h"
/**
* insertion_sort_list - Sorts a doubly linked list of integers
* @list: Pointer to the head of the doubly linked list
*/
void insertion_sort_list(listint_t **list)
{
listint_t *current, *next_node;
int temp;
if (list == NULL || *list == NULL)
return;
current = (*list)->next;
while (current != NULL)
{
next_node = current->next;
while (current->prev != NULL && current->n < current->prev->n)
{
temp = current->n;
*(int *)&current->n = current->prev->n;
*(int *)&current->prev->n = temp;
current = current->prev;
print_list(*list);
}
current = next_node;
}
}
