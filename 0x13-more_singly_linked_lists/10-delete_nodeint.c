#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes node at a
 *                           given index of listint_t list
 * @head: A pointer to the address of the head of listint_t list
 * @index: The index of the node to be deleted - indices start at 0
 * Return: On success - 1
 *         On failure - -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *del, *insr = *head;
unsigned int node;
if (insr == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(insr);
return (1);
}
for (node = 0; node < (index - 1); node++)
{
if (insr->next == NULL)
return (-1);
insr = insr->next;
}
del = insr->next;
insr->next = del->next;
free(del);
return (1);
}
