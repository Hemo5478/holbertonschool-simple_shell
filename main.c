#include "main.h"

/**
 * *main - The main part
 * *@ac: a number
 * *@argv: a string
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
}

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
