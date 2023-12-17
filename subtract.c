#include "monty.h"

/**
  *f_subptr- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_subptr(stackman_s **head, unsigned int counter)
{
	stackman_s *aux;
	int sup, sheldon;

	aux = *head;
	for (sheldon = 0; aux != NULL; sheldon++)
	{
		aux = aux->present;
	}
	if (sheldon < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.document);
		free(bus.details);
		free_stackover(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sup = aux->present->a - aux->a;
	aux->present->a = sup;
	*head = aux->present;
	free(aux);
}
