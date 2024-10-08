#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: pointer to the head of the list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
listint_t *slow = list;
listint_t *fast = list;

if (!list)
return (0);
while (slow && fast && fast->next)
{
slow = slow->next;       /* moves one step */
fast = fast->next->next; /* moves two steps */

if (slow == fast)        /* cycle detected */
return (1);
}
return (0); /* no cycle detected */
}
