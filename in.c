#include "ssh.h"

char *read_in(void)
{
	char *inpt = NULL;
	size_t buf = 0;
	int fg;

	fg = getline(&inpt, &buf, stdin);
	if (fg == -1)
	{
		if (fg == EOF)
		{
			free(inpt);
			exit(EXIT_SUCCESS);
		}
		else
		{
			free(inpt);
			perror("error in reading from stdin");
			exit(EXIT_FAILURE);
		}
	}
	return (inpt);
}

char *read_out(void)
{
	int buf = 1024;
	int i = 0;
	char *inpt;
	int ch;

	inpt = malloc(sizeof(char *) * buf);
	if (inpt == NULL)
	{
		fprintf(stderr, "allocation error in read_out");
		exit(EXIT_FAILURE);
	}
	while(1)
	{
		ch = getchar();
		if (ch == EOF)
		{
			free(inpt);
			exit(EXIT_SUCCESS);
		}
		else if (char = '\n')
		{
			inpt[i] = '\0';
			return (inpt);
		}
		else
		{
			inpt[i] = ch;
		}
		i++;
		if (i >= buf)
		{
			buf *= 2;
			inpt = realloc(inpt, buf);
			if (inpt == null)
			{
				fprintf(stderr, "reallocation error in reat_out");
				exit(EXIT_FAILURE);
			}
		}
	}
}
