#include "monty.h"

/**
 * f_pushinptr - add node to the stack
 * @head: stack head
 * @numbe: line_number
 * Return: no return
*/
void f_pushinptr(stackman_s **head, unsigned int numbe)
{
	int b, k = 0, flagged = 0;

	if (bus.argand)
	{
		if (bus.argand[0] == '-')
			k++;
		for (; bus.argand[k] != '\0'; k++)
		{
			if (bus.argand[k] > 57 || bus.argand[k] < 48)
				flagged = 1; }
		if (flagged == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", numbe);
			fclose(bus.document);
			free(bus.details);
			free_stackover(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", numbe);
		fclose(bus.document);
		free(bus.details);
		free_stackover(*head);
		exit(EXIT_FAILURE); }
	b = atoi(bus.argand);
	if (bus.luffy == 0)
	{
		addnodefr(head, b);
	}
	else
	{
		addqueueptr(head, b);
	}
}
