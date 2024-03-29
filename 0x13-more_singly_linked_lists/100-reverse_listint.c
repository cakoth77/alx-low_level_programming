#include "lists.h"
/**
 * reverse_listint - Reverse a listint_t list
 * @head: A pointer to the address of the head of listint_t list
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *front, *rev;
if (head == NULL || *head == NULL)
return (NULL);
rev = NULL;
while ((*head)->next != NULL)
{
front = (*head)->next;
(*head)->next = rev;
rev = *head;
*head = front;
}
(*head)->next = rev;
return (*head);
}
