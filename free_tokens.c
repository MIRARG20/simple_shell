#include "shell.h"
/**
 * free_tokens - Frees the memory allocated
 * to an array of strings
 * @tokens: Pointer to the first element of
 * the array of string
 *
 * Return: void
 */
void free_tokens(char **tokens)
{
int i;
for (i = 0; tokens[i] != NULL; i++)
{
free(tokens[i]);
}
free(tokens);
}
