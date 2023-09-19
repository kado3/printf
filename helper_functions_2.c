#include "main.h"
/* Function prototypes for helper functions */
int print_percent(va_list args);
int print_int(va_list args);
/**
* print_percent - Print a percent character.
* @args: The argument list.
*
* Return: Number of characters printed.
*/
int print_percent(va_list args)
{
(void)args; /* Unused parameter */
return (_putchar('%'));
}
/**
* print_int - Print an integer.
* @args: The argument list.
*
* Return: Number of characters printed.
*/
int print_int(va_list args)
{
int num = va_arg(args, int);
char buffer[12]; /* Assumes a 32-bit integer. */
int len = _itoa(num, buffer);
int count = 0;

while (buffer[count])
{
_putchar(buffer[count]);
count++;
}
return (len);
}
