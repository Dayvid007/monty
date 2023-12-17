#include "monty.h"

/**
 * f_divptr - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_divptr(stackman_s **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.document);
		free(bus.details);
		free_stackover(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	if (i->a == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.document);
		free(bus.details);
		free_stackover(*head);
		exit(EXIT_FAILURE);
	}
	aux = i->present->a / i->a;
	i->present->a = aux;
	*head = i->present;
	free(i);
}
