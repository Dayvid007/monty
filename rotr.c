#include "monty.h"

/**
  *f_rots- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rots(stackman_s **head, __attribute__((unused)) unsigned int counter)
{
	stackman_s *pyc;

	pyc = *head;
	if (*head == NULL || (*head)->present == NULL)
	{
		return;
	}
	while (pyc->present)
	{
		pyc = pyc->present;
	}
	pyc->present = *head;
	pyc->before->present = NULL;
	pyc->before = NULL;
	(*head)->before = pyc;
	(*head) = pyc;
}
