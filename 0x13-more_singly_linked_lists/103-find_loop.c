#include "lists.h"
/**
 * find_listint_loop - Finds the looop contained in
 *                     a listint_t linked list
 * @head: A pointer to the head of the listint_t list
 * Return: If there is no loop - NULL
 *         Otherwise - the address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *uni, *lop;
if (head == NULL || head->next == NULL)
return (NULL);
uni = head->next;
lop = (head->next)->next;
while (lop)
{
if (uni == lop)
{
uni = head;
while (uni != lop)
{
uni = uni->next;
lop = lop->next;
}
return (uni);
}
uni = uni->next;
lop = (lop->next)->next;
}
return (NULL);
}
