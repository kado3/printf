#include "main.h"
/**
* _putchar - Write a character to stdout.
* @c: The character to write.
*
* Return: 1 on success, -1 on error.
*/
int _putchar(char c)
{
return write(1, &c, 1);
}
/* Implement other helper functions here */
/**
* print_char - Print a character.
* @args: The argument list.
*
* Return: Number of characters printed.
*/
int print_char(va_list args)
{
char c = va_arg(args, int);
return _putchar(c);
}
/**
* print_string - Print a string.
* @args: The argument list.
*
* Return: Number of characters printed.
*/
int print_string(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;
if (str == NULL)
str = "(null)";
while (str[count])
{
_putchar(str[count]);
count++;
}
return (count);
}
