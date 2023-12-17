#include "monty.h"

/**
 * f_pintptr - prints the top
 * @head: stack head
 * @numbe: line_number
 * Return: no return
*/
void f_pintptr(stackman_s **head, unsigned int numbe)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", numbe);
		fclose(bus.document);
		free(bus.details);
		free_stackover(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->a);
}
