#include "main.h"

/**
 * *hemo_read_line - a function that reads the line
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *hemo_read_line(void)
{
	char *line = NULL;
	size_t n = 0;

	if (getline(&line, &n, stdin) == -1)
	{
		exit(-1);
	}
	strtok(line, " \t\n\r");
	return (line);
}
