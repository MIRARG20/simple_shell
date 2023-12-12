#include "shell.h"

/**
 * _execute - check if a command is builtin
 * or a process.
 * @args: Commands and flags.
 *
 * Return: 1 if success, 0 otherwise.
 */
int _execute(char **args)
{
char *builtin_command[] = {
"cd",
"env",
"help",
"exit"
};
int (*func[])(char **) = {
&_cd,
&_env,
&_help,
&E_exit
};
int i = 0;

if (args[0] == NULL)
{
return (-1);
}

while (i < (int)(sizeof(builtin_command) / sizeof(char *)))
{
if (strcmp(args[0], builtin_command[i]) == 0)
{
return ((*func[i])(args));
}
i++;
}
return (chi_process(args));
}
