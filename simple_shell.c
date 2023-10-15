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
	}
	else
	{
	}
/*
	while (1)
	{
		write(1, "$ ", 2);
		fflush(stdin);
		_G = getline(&col, &col_l, stdin);
		if (_G == EOF)
		{
			write(1, "\n", 1);
			break;
		}
	}
*/
	return (0);
}
