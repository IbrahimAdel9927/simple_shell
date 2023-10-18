#include "ssh.h"

/**
 * handl_arg - func that handle arg
 * @col: the input
 * Return: pointer
*/
char **handl_arg(char *col)
{
	int size = 64;
	char **tks = malloc(sizeof(char *) * size);

	if (!tks)
	{
		return (NULL);
	}
	_st(&tks, col, " ");
	return (tks);
}

/**
 * ex_arg - func that execve
 * @arg: first input
 * @status: the second input
 * Return: int
*/
int ex_arg(char **arg, int status)
{
	if (arg[0] == NULL)
		return (-1);
	if (_scm(arg[0], "cd") == 0)
	{
	}
	else if (_scm(arg[0], "env") == 0)
	{
		p_env(environ);
		return (1);
	}
	else if (_scm(arg[0], "help") == 0)
	{
	}
	else if (_scm(arg[0], "exit") == 0)
	{
		free_arg(arg);
		exit(status);
	}
	return (_process(arg));
}

/**
 * _process - func that execve
 * @arg: the input
 * Return: int
*/
int _process(char **arg)
{
	pid_t id;
	int st;

	id = fork();
	if (id == 0)
	{
		execve(arg[0], arg, environ);
		free_arg(arg);
	}
	else
	{
		waitpid(id, &st, 0);
		st = WEXITSTATUS(st);
		free_arg(arg);
	}
	return (st);
}
