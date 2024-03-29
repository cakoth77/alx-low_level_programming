#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: points to the head of the list_t list
 * @str: string to be added to the list_t list
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *current_node;
int len;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
for (len = 0; str[len];)
len++;
new_node->len = len;
new_node->next = NULL;
current_node = *head;
if (current_node == NULL)
{
*head = new_node;
}
else
{
while (current_node->next != NULL)
current_node = current_node->next;
current_node->next = new_node;
}
return (*head);
}
