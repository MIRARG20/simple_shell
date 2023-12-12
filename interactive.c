#include "shell.h"
/**
 * interactive - reading commands
 * from the user and execut them
 *
 * Return: void
 */
void interactive(void)
{
char *my_line;
char **arguments;
int st = -1;

printf("my_shell$ ");

while (st == -1)
{

my_line = get_line();
arguments = tokns_split(my_line);
st = _execute(arguments);

free(my_line);
free(arguments);
if (st == -1)
{
printf("my_shell$ ");
}
}
exit(st);
}
