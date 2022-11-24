#ifndef MAIN_H
#define MAIN_H
#include<stdlib.h>
#include<stddef.h>
#include <unistd.h>
#include <stdio.h>
typedef struct op {
	char op;
	int (*f)(char *);

	} op_t;

typedef struct op_int {
	char op;
	int (*f)(int);

	} op_int_t;


int _printf(char *format, ...);
int __format_print(char *format, ...);
int ___format_print(char *format, ...);
int printf_c(char *c);
int printf_s(char *c);
int (*action_func(char s))(char *);
int (*action_func1(char s))(int);
int to_binary(int a);
int printf_S(char *c);
int printf_p(int a);


int plus_flag_check(char *c, char* str);



#endif
