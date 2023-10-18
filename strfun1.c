#include "ssh.h"

/**
 * kh_chaar - A function that prints char
 * @c: input
 * Return: int
*/
int kh_chaar(char c)
{
	return (write(1, &c, 1));
}

/**
 * kh_string - A function prints string
 * @str: input
 * Return: int
*/
int kh_string(char *str)
{
	int i = 0;

	if (!str)
		return (kh_string("(null)"));
	while (str[i])
	{
		kh_chaar(str[i]);
		i++;
	}
	return (i);
}

/**
 * _strtoi - a function that convert a string to an integer.
 * @s: the input
 * Return: convert intger
*/
int _strtoi(char *s)
{
	unsigned int n = 0;
	int a = 1;

	do {
		if (*s == ' ')
			a *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);
	return (n * a);
}

/**
 * _sl - a function that returns the length of a string.
 * @s: the input
 * Return: the length of a string.
*/
int _sl(char *s)
{
	int a;

	for (a = 0; *s != '\0'; s++)
		a++;
	return (a);
}

/**
 * _sc - a function that copies the string pointed to
 * by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: frist input
 * @src: second input
 * Return: dest
*/
char *_sc(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
