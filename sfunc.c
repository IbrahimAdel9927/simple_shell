#include "ssh.h"
/**
 * _strlen - get the string lenght
 * @s: input
 * Return : integer
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}
/**
 * *_strcpy - copy the string
 * @dest: input
 * @src: input
 * Return: integer
*/
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

