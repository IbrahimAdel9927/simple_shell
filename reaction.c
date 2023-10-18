#include "ssh.h"

/**
 * p_env - func print the env
 * @environ: the input
 * Return: void
*/
void p_env(char **environ)
{
	int a = 0;

	while (environ[a])
	{
		kh_string(environ[a]);
		kh_chaar('\n');
		a++;
	}
}

/**
 * free_arg - func that free memory
 * @arg: the input
 * Return: void
*/
void free_arg(char **arg)
{
	int a = 0;

	if (!arg)
		return;
	while (arg[a])
		free(arg[a++]);
	free(arg);
}
