#include "ssh.h"

int main(int ac, char **av)
{
    (void)ac;
    char *buff = NULL;
    size_t i = 0;
    int k =0;

    while (1)
    {
    write(1, "$ ", 2);
    k = getline(&buff, &i, stdin);
    if (k == EOF)
    {
	printf("\n");
	break;
    }
    printf("%s", buff);
    }
    return (0);
}
