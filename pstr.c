#include "monty.h"

/**
 * f_pstrptr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pstrptr(stackman_s **head, unsigned int counter)
{
	stackman_s *i;
	(void)counter;

	i = *head;
	while (i)
	{
		if (i->a > 127 || i->a <= 0)
		{
			break;
		}
		printf("%c", i->a);
		i = i->present;
	}
	printf("\n");
}
