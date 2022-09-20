#include "main.h"

/**
 * _puts - function that puts
 * @str: _puts function parameter
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
}
