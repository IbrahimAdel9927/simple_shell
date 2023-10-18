#include "ssh.h"

/**
 * _ex - function help us
 * @environ: second input
 * @com: third input
*/
void _ex(char **environ, char **com, char **av)
{
	pid_t pid = fork();
	char *args[ml];
	char *token = strtok(*com, " ");
	int i = 0;

	if (pid < 0)
		return;
	else if (pid == 0)
	{
		while (token != NULL && i < ml - 1)
		{
			args[i++] = token;
			token = strtok(NULL, " ");
		}
		args[i] = NULL;
		execve(args[0], args, environ);
		kh_string(av[0]);
		kh_string(": No such file or directory");
		kh_chaar('\n');
		return;
	}
	else
		wait(NULL);
}
