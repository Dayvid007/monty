#include "monty.h"

/**
* ex - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @document: poiner to monty file
* @details: line content
* Return: no return
*/
int ex(char *details, stackman_s **stack, unsigned int counter, FILE *document)
{
	informant_t opst[] = {
				{"push", f_pushinptr}, {"pall", f_pallptr}, {"pint", f_pintptr},
				{"pop", f_popptr},
				{"swap", f_swapptr},
				{"add", f_adder},
				{"nop", f_noper},
				{"sub", f_subptr},
				{"div", f_divptr},
				{"mul", f_multi},
				{"mod", f_moder},
				{"pchar", f_pcharptr},
				{"pstr", f_pstrptr},
				{"rotl", f_rotlptr},
				{"rotr", f_rots},
				{"queue", f_queuestr},
				{"stack", f_stackman},
				{NULL, NULL}
				};
	unsigned int a = 0;
	char *option;

	option = strtok(details, " \n\t");
	if (option && option[0] == '#')
		return (0);
	bus.argand = strtok(NULL, " \n\t");
	while (opst[a].operationcode && optionn)
	{
		if (strcmp(option, opst[a].operationcode) == 0)
		{	opst[a].f(stack, counter);
			return (0);
		}
		a++;
	}
	if (option && opst[a].operationcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, option);
		fclose(document);
		free(details);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
