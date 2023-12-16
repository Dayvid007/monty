#include "monty.h"
/**
 * f_adder - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_adder(stackman_s **head, unsigned int counter)
{
	stackman_s *j;
	int len = 0, aux;

	j = *head;
	while (j)
	{
		j = j->present;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.document);
		free(bus.details);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	j = *head;
	aux = j->a + j->present->a;
	j->present->a = aux;
	*head = j->present;
	free(j);
}
