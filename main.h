#ifndef MY_PRINTF
#define MY_PRINTF

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>


int print(char c);
int _printf(const char *format, ...);
int print_string(char *s);

#endif