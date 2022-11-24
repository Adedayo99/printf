#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
* struct fmt - Struct op
* @fmt: The format.
* @fn: The function associated.
*/
struct fmt
{
char fmt;
int (*fn)(va_list, char[], int, int, int, int);
};

/**
* typedef struct fmt fmt_t - Struct op
* @fmt: The format.
* @fm_t: The function associated.
*/
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int _print(const char *fmt, int *i, va_list list);

/* Funtions to print chars and strings */

int print_char(va_list types);
int print_string(va_list type);
int print_percent(va_list types);

#endif
