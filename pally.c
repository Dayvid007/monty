#include "monty.h"

/**
 * f_pallptr - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pallptr(stackman_s **head, unsigned int counter)
{
	stackman_s *i;
	(void)counter;

	i = *head;
	if (i == NULL)
	{
		return;
	}
	while (i)
	{
		printf("%d\n", i->a);
		i = i->present;
	}
}
