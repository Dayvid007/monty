#include "monty.h"

/**
 * f_multi - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_multi(stackman_s **head, unsigned int counter)
{
	stackman_s *i;
	int len = 0, aux;

	i = *head;
	while (i)
	{
		i = i->present;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.document);
		free(bus.details);
		free_stackover(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	aux = i->present->a * i->a;
	i->present->a = aux;
	*head = i->onto;
	free(i);
}
