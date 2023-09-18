#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * _printf - Prints output according to a format.
 * @format: The format string.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;
va_start(args, format)
while (format && format[count])
{
if (format[count] == '%')
{
count++;
if (format[count] == 'c')
{
char c = va_arg(args, int);
write(1, &c, 1);
}
else if (format[count] == 's')
{
char *str = va_arg(args, char *);
if (str)
write(1, str, _strlen(str));
else
write(1, "(null)", 6);
}
else if (format[count] == '%')
{
write(1, "%", 1);
}
else
{
write(1, &format[count - 1], 1);
write(1, &format[count], 1);
}
}
else
{
write(1, &format[count], 1);
}
count++;
}
va_end(args);
return count;
}
/**
 * _strlen - Computes the length of a string.
 * @str: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(const char *str)
{
int len = 0;
while (str[len])
len++;
return len;
}
