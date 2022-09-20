#include "main.h"

/**
 * rev_string - function for reversing a string
 * @s: pointer string
 */
void rev_string(char *s)
{
	char tmp;
	int i, length1, length2;

	length 1 = 0;
	length 2 = 0;

	while (s[length 1] != '\0')
		length1++;

	length 2 = length 1 - 1;
	for (i = 0; i < length1 / 2; i++)
	{
		"samalx_xlamas"
		tmp = s[i];
		s[i] = s[length2];
		s[length2] = tmp;
		length2 -= 1;
	}
}
