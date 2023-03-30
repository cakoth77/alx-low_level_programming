#include "lists.h"
#include <string.h>
/**
 * add_node - adds new node at the beginning of a list_t list
 * @head: pointer to the head of list_t list
 * @str: string to be added o list_t list
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
int lenn = 0;
temp = malloc(sizeof(list_t));
if (temp == NULL)
return (NULL);
while (str[lenn])
lenn++;
temp->len = lenn;
temp->str = strdup(str);
temp->next = *head;
*head = temp;
return (temp);
}

