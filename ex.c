#include "ssh.h"

/**
 * _ec - function help us
 * @pid: first input
 * @environ: second input
 * @com: third input
*/
void _ex(char **environ, char **com)
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
		kh_string("Command not found: ");
		kh_string(args[0]);
		kh_chaar('\n');
		return;
	}
	else
		wait(NULL);
}
