#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - Counts number of unique nodes
 *                      in a looped listint_t linked list
 * @head: A pointer to the head of listint_t
 * Return: If the list is not loope - 0
 *         Otherwise - number of unique nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *uni, *lop;
size_t nodes = 1;
if (head == NULL || head->next == NULL)
return (0);
uni = head->next;
lop = (head->next)->next;
while (lop)
{
if (uni == lop)
{
uni = head;
while (uni != lop)
{
nodes++;
uni = uni->next;
lop = lop->next;
}
uni = uni->next;
while (uni != lop)
{
nodes++;
uni = uni->next;
}
return (nodes);
}
uni = uni->next;
lop = (lop->next)->next;
}
return (0);
}
/**
 * print_listint_safe - Prints a listint_t list safely
 * @head: A pointer to the head of listint_t list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes;
nodes = looped_listint_len(head);
if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nodes);
}
