#include "main.h"

/**
 * *main - The main part
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	char *line;

	while (1)
	{
		printf("($)");
		line = hemo_read_line();
		hemo_exec_line(line);
	}
	free(line);
}
