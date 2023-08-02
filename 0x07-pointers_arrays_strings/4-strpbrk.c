#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: the string of a set of strings including accept
 * @accept: the string of bytes
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[k]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return ('\0');
}
