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
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index)
		dest[dest_len++] = src[index];

	return (dest);
}
