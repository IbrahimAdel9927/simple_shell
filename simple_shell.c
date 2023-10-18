#include "ssh.h"

/**
 * main - Entry point for a program that work as
 * a unx shell
 *
 * Return: int
*/
int main(void)
{
	char *com;
	char pro[] = "$ ";

	while (1)
	{
		com = malloc(ml);
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
		_ex(environ, &com);
		free(com);
	}
return (0);
}

