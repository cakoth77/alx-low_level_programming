#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node to listint_t
 *                           list at a given position
 * @head: A pointer to the address of head of listint_t list
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0
 * @n: The integer for the new node
 * Return: If the function fails - NULL
 *         Otherwise - the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *pos, *insr = *head;
unsigned int node;
pos = malloc(sizeof(listint_t));
if (pos == NULL)
return (NULL);
pos->n = n;
if (idx == 0)
{
pos->next = insr;
*head = pos;
return (pos);
}
for (node = 0; node < (idx - 1); node++)
{
if (insr == NULL || insr->next == NULL)
return (NULL);
insr = insr->next;
}
pos->next = insr->next;
insr->next = pos;
return (pos);
}
