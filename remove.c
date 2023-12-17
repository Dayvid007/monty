#include "monty.h"

/**
 * f_popptr - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_popptr(stackman_s **head, unsigned int counter)
{
	stackman_s *i;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.document);
		free(bus.details);
		free_stackover(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	*head = i->present;
	free(i);
}
