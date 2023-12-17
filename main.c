#include "monty.h"
bustee_t bus = {NULL, NULL, NULL, 0};

/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *details;
	FILE *document;
	size_t siz = 0;
	ssize_t rid_ln = 1;
	stackman_s *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	document = fopen(argv[1], "r");
	bus.document = document;
	if (!document)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (rid_ln > 0)
	{
		details = NULL;
		rid_ln = getline(&details, &siz, document);
		bus.details = details;
		counter++;
		if (rid_ln > 0)
		{
			ex(details, &stack, counter, document);
		}
		free(details);
	}
	free_stackover(stack);
	fclose(document);

	return (0);
}
