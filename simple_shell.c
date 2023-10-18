#include "ssh.h"

/**
 * main - Entry point for a program that work as
 * a unx shell
 * @ac: first input
 * @av: second input
 * Return: int
*/
int main(int ac, char **av)
{
	char *com;
	char pro[] = "$ ";

	do {
		com = malloc(ml * (ac / ac));
		if (isatty(STDIN_FILENO) == 1)
			kh_string(pro);
		if (fgets(com, ml, stdin) == NULL)
		{
			if (isatty(STDIN_FILENO) == 1)
				kh_string("\n");
			free(com);
			break;
		}
		if (com[_sl(com) - 1] == '\n')
			com[_sl(com) - 1] = '\0';
		if (_sl(com) == 0)
			continue;
		_ex(environ, &com, av);
		free(com);
	} while (!feof(stdin));
return (0);
}

