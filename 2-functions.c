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
int _strcmp(char *a, char *b)
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
