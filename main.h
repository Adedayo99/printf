#ifndef MAIN_H
#define MAIN_H

typedef struct op {
	char op;
	int (*f)(char *);

	} op_t;



int _printf(const char *format, ...);
int printf_1(int *c);
int printf_2(const char *c);
int format_checker(const char *p);
#include <string.h>











#endif
