#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _strlen - a function checks if the next node is a null or not
 * @s: is the number of nodes exists
 * Return: the number of nodes
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * print_list -  prints a linked list
 * @h: pointer to a  first node
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}

