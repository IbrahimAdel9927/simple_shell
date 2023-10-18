#include "ssh.h"

/**
 * main - Entry point for a program that work as
 * a unx shell
 *
 * Return: int
*//*
int main(void)
{
	char *col = NULL, *path = NULL, **arg = NULL;
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
		path = pth(arg[0]);
		if (path == NULL)
		{
			continue;
		}
		free(arg[0]);
		arg[0] = path;
		status = ex_arg(arg, status);
		if (status >= 0)
			break;
	} while (status == -1);
	return (status);
}*/
#define ml 1000
int main(void) {
    char com[ml];
    char pro[] = "$ ";

    while (1) {
	    if (isatty(STDIN_FILENO) == 1)
		    printf("%s", pro);

        if (fgets(com, sizeof(com), stdin) == NULL) {
		if (isatty(STDIN_FILENO) == 1)
			printf("\n");
            break;
        }
        com[strcspn(com, "\n")] = '\0';
        pid_t pid = fork();

        if (pid < 0) {
            break;
        } else if (pid == 0) {
            execlp(com, com, NULL);
            printf("Command not found: %s\n", com);
            break;;
        } else {
            wait(NULL);
        }
    }

    return 0;
}
