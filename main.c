#include "main.h"

/**
 * *main - The main part
 * *@argc : a counter
 * *@argv : an array of arguments
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main( __attribute__((unused)) int argc, char *argv[])
{
	char *line;

	while (1)
	{
		printf("($)");
		line = hemo_read_line();
		hemo_exec_line(line, argv);
		free(line);
	}
	return (0);
}
