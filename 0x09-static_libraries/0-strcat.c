#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * this function appends the src string to the dest string
 * @dest: string that will be appended
 * @src: string to e concatenated upon
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
		j++;
	}

	i = 0;

	while (*(src + i) != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
