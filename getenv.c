#include "shell.h"

/**
 * _getenv - Retrieve the value
 * of an environment variable
 * @ptr: pointer to a character,
 * which is the name of the environment variable
 *
 * Return: A pointer to environment variable or NULL
 */

char *_getenv(const char *ptr)
{
char *tok;
int i;

for (i = 0; environ[i]; i++)
{
tok = strtok(environ[i], "=");
if (strcmp(tok, ptr) == 0)
{
return (strtok(NULL, "="));
}
}
return (NULL);
}
