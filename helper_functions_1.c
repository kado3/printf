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
while (*str)
{
count += _putchar(*str);
str++;
}
return (count);
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
int count = 0;
char buffer[12]; /* Assumes a 32-bit integer. */
if (num < 0)
{
count += _putchar('-');
num = -num;
}
count += print_unsigned(num);
return (count);
}
