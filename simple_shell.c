#include "ssh.h"

/**
 * main - Entry point for a program that work as 
 * a unx shell
 *
 * @ac: num of the arg
 * @av: the arg
 *
 * Return: int
*/
int main(void)
{
	char *col = NULL, **arg = NULL;
	int status = -1;

	do {
		if (isatty(STDIN_FILENO) == 1)
			write(1, "$ ", 2);
		col = malloc(sizeof(char *) * 1024);
		if (_getcol(&col, 8192) == NULL)
		{
			if (isatty(STDIN_FILENO) == 1)
				write(1, "\n", 1);
			free(col);
			break;
		}
		if (col[_sl(col) - 1] == '\n')
			col[_sl(col) - 1] = '\0';
		if (_sl(col) == 0)
			continue;
		arg = handl_arg(col);
		status = ex_arg(arg);
		free(col);
		free(arg);
		if (status >= 0)
			break;
	} while (status == -1);
	return (0);
}
