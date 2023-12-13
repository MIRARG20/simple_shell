#include "shell.h"
/**
 * tokns_split - Split a string into strings.
 * @my_line : a char
 * Return: A pointer to a new array.
 */
char **tokns_split(char *my_line)
{
const char *del = TOK_DELIM;
int buf_s = 64;
char *token;
char **arr_tokens = malloc(sizeof(char *) * buf_s);
int i = 0;
if (!arr_tokens)
{
printf("Allocation error \n");
exit(EXIT_FAILURE);
}
token = strtok(my_line, del);
for (; token != NULL; token = strtok(NULL, del))
{
if (token[0] == '#')
{
break;
}
if (i >= buf_s)
{
buf_s += buf_s;
arr_tokens = realloc(arr_tokens, buf_s *sizeof(char *));
if (!arr_tokens)
{
printf("Reallocation error\n");
exit(EXIT_FAILURE);
}
}
arr_tokens[i++] = strdup(token);
if (!arr_tokens[i - 1])
{
printf("Allocation error\n");
exit(EXIT_FAILURE);
}
}
arr_tokens[i] = NULL;
return (arr_tokens);
}
