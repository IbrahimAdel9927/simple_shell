#include "ssh.h"

/***/
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

/***/
void free_arg(char **arg)
{
	int a = 0;

	if (!arg)
		return;
	while (arg[a])
		free(arg[a++]);
	free(arg);
}
