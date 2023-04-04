#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);
/**
 * looped_listint_count - Counts number of unique nodes in a
 *                        looped listint_t linked list
 * @head: A pointer to the head of the listint_t to check
 * Return: If the list is not looped - 0
 *         Otherwise - the number of unique nodes in the list
 */
size_t looped_listint_count(listint_t *head)
{
listint_t *uni, *lop;
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
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to the address of the head of listint_t list
 * Return: The size of the list that was freed
 * Description: The function sets the head to NULL
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *fre;
size_t nodes, index;
nodes = looped_listint_count(*h);
if (nodes == 0)
{
for (; h != NULL && *h != NULL; nodes++)
{
fre = (*h)->next;
free(*h);
*h = fre;
}
}
else
{
for (index = 0; index < nodes; index++)
{
fre = (*h)->next;
free(*h);
*h = fre;
}
*h = NULL;
}
h = NULL;
return (nodes);
}
