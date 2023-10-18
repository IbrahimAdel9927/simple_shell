#include "ssh.h"

/***/
char **handl_arg(char *col)
{
	int size = 64;
	char **tks = malloc(sizeof(char *) * size);

	if (!tks)
	{
		/*fprintf(stderr, "allocation error in split_line: tokens\n");
		exit(EXIT_FAILURE);*/
		return (NULL);
	}
	_st(&tks, col, "\t\r\n\a\"");
	return (tks);
}

int ex_arg(char **arg)
{
	if (arg[0] == NULL)
		return (-1);
	if (_scm(arg[0], "cd") == 0)
	{
	}
	else if (_scm(arg[0], "env") == 0)
	{
	}
	else if (_scm(arg[0], "help") == 0)
	{
	}
	else if (_scm(arg[0], "exit") == 0)
	{
	}
	return (_process(arg));
}

int _process(char **arg)
{
	pid_t id;
	int st;

	id = fork();
	if (id == 0)
	{
		execve(arg[0], arg, NULL);
		/**free*/
	}
	else
	{
		waitpid(id, &st, WUNTRACED);
		st = WEXITSTATUS(st);
		/*free*/
	}
	return (st);
}
