#include "shell.h"


/**
 * non_interactive - Function for handling
 * non-interactive shell mode
 *
 * Return: void
 */
void non_interactive(void)
{
char *my_line;
char **args;
int status;

while (status == -1)
{
my_line = read_std();
args = tokns_split(my_line);
status = _execute(args);

free(my_line);
free(args);
if (status >= 0)
{
exit(status);
}
}
}
