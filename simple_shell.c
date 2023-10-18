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
		com[strcspn(com, "\n")] = '\0';
		_ex(environ, &com, av);
		free(com);
	} while (1);
return (0);
}

