#include "lists.h"
int _str(char *s)
{	
	int i = 0;
	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
size_t print_list(const list_t *h)
{
	size_t i = 0;
	while (h)
	{
		printf("[%d] %s\n", _str(h->str), h-> str ? h ->str :"(nil)";
		h = h->next;
		i++
	}
	return (i);
	}	
