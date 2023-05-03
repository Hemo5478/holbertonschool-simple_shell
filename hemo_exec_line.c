#include "main.h"

/**
 * *hemo_exec_line - a function that execute the line
 * @line : a string command
 * @argv : array of arguments
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void hemo_exec_line(char *line, char *argv[])
{
	pid_t child;
	int status;
	char *myenv[] = {NULL};

	child = fork();
	if (child == 0)
	{
		if (execve(line, argv, myenv))
		{
			perror("hsh");
			exit(EXIT_FAILURE);
		}
	}
	if (child > 0)
	{
		wait(&status);
	}
}
