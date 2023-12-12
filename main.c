#include "shell.h"

/**
 * main - checks if the shell is running
 * interactively or not
 *
 * Return: 0 (success)
 */
int main(void)
{
if (isatty(STDIN_FILENO) == 1)
{
interactive();
}
else
{
non_interactive();
}
return (0);
}
