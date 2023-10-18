#include "ssh.h"

/***/
char *_getcol(char **buffer, int bufl)
{
	return (fgets(*buffer, bufl, stdin));
}
