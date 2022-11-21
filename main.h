#ifndef MAIN_H
#define MAIN_H
#include<stdlib.h>
#include<stddef.h>
#include <unistd.h>
typedef struct op {
	char op;
	int (*f)(char *);

	} op_t;



int _printf(char *format, ...);
int printf_1(char *c);
int printf_2(char *c);
int (*action_func(char s))(char *);










#endif
