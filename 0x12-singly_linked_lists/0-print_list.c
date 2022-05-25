#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @ptr: pointer to the list.
 * Return: number of nodes.
 **/
size_t print_list(const list_t *ptr)
{
	size_t cont = 0;

	while (ptr)
	{
		if (ptr->str)
			printf("[%u] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		cont++;
		ptr = ptr->next;
	}

	return (cont);
}
