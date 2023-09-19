#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/* Function prototypes for helper functions */
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
/**
* _printf - Produces output according to a format.
* @format: The format string.
*
* Return: The number of characters printed (excluding the null byte).
*/
int _printf(const char *format, ...)
{
va_list args;
int count = 0;
int i = 0;
va_start(args, format);
while (format && format[i])
{
if (format[i] == '%')
{
i++;
if (format[i] == '\0')
return (-1); /* Incomplete format specifier */
if (format[i] == 'c')
count += print_char(args);
else if (format[i] == 's')
count += print_string(args);
else if (format[i] == 'd' || format[i] == 'i')
count += print_int(args);
else
count += _putchar('%') + _putchar(format[i]);
}
else
{
count += _putchar(format[i]);
}
i++;
}
va_end(args);
return (count);
}

