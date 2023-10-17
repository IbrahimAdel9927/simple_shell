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
	char *col = NULL;
	size_t col_l = 0;
	int status = -1, fg;

	do {
		if (isatty(STDIN_FILENO) == 1)
			write(1, "$ ", 2);
		col = malloc(sizeof(char *) * 1024);
		fg = getline(&col, &col_l, stdin);
		printf("%s1\n", col);
		if ((fg == -1) || (fg == EOF))
		{
			if (isatty(STDIN_FILENO) == 1)
				write(1, "\n", 1);
			printf("%s2\n", col);
			free(col);
			printf("%s3\n", col);
			break;
		}
		/*arg = handl_arg(col);
		status = ex_arg(arg);*/
		free(col);
		/*free(arg);
		if (status >= 0)
			break;
	} while (status == -1);
	return (0);
}
