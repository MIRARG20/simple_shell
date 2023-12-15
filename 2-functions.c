#include "shell.h"
/**
 * _strlen - Calculate the length of a string.
 * @ptr: The input string.
 *
 * Return: The length of the string.
 */
size_t _strlen(const char *ptr)
{
size_t length = 0;

while (ptr[length] != '\0')
{
length++;
}

return (length);
}





/**
 * _strcmp - compare string values
 * @a: first argument
 * @b: second argument
 *
 * Return: 0 If the two strings are identical,
 * returns 1 If the first string is greater than the second string,
 * returns (-1) If the first string is less than the second string
 */
int _strcmp(char *a, const char *b)
{
int i;

i = 0;
while (a[i] != '\0' && b[i] != '\0')
{
if (a[i] != b[i])
{
return (a[i] - b[i]);
}
i++;
}
return (0);
}


/**
 * _my_strdup - Duplicate a string
 * @s: The input string to be duplicated
 *
 * Return: A pointer to the duplicated string on success,
 * or NULL if memory allocation fails.
 */


char *_my_strdup(const char *st)
{
int len;
int i;
char *st_dupp;

if (st == NULL)
{
return (NULL);
}


len = 0;
while (st[len] != '\0')
{
len++;
}

st_dupp = malloc(len + 1);

if (st_dupp != NULL)
{

for (i = 0; i <= len; i++)
{
st_dupp[i] = st[i];
}
}

return (st_dupp);
}
