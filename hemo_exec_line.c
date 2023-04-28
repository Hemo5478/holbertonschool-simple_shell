#include "main.h"

/**
 * *hemo_exec_line - a function that execute the line
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void hemo_exec_line(char *line)
{
	pid_t child;
	int status;
	char *myargs[] = {NULL};
	char *myenv[] = {NULL};

	child = fork();
	if (child == 0)
	{
		if (execve(line, myargs, myenv))
		{
			perror("hsh");
			exit(EXIT_FAILURE);
		}
	}
	if (child > 0)
	{
		wait(&status);
	}
.}
