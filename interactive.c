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
int x;



while (1)
{
printf("my_shell$ ");
my_line = get_line();
arguments = tokns_split(my_line);
x = _execute(arguments);

}
free_tokens(arguments);
free(my_line);

if (x >= 0)
{
exit(x);
}
}

