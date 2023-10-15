#include "ssh.h"
#define ma_x 500
/**
 * main - Entry point for a program that work as 
 * a unx shell
 *
 * @ac: num of the arg
 * @av: the arg
 *
 * Return: int
*/
int main(int ac, char *av)
{
	char *col;
	size_t col_l = 0;
	int _G = 0;

	if (ac > 1)
	{
		/*error*/
	}
	if (isatty(STDIN_FILENO) == 1)
	{
		do {
			write(1, "$ ", 2);
			col = read_in();
			arg = handl_arg(col);
			status = ex_arg(arg);
			free(col);
			free(arg);
			if (status >= 0)
				exit(status);
		} while (status = -1);
	}
	else
	{
		do {
			col = read_out();
			arg = handl_arg(col);
			status = ex_arg(arg);
			free(col);
			free(arg);
			if (status >= 0)
				exit(status);
		} while (status == -1);
	}
	return (0);
}
