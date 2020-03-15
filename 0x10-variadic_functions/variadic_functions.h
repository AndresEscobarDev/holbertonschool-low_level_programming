#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
typedef struct fo
{
    char fo;
    void (*f)(va_list);
} fo_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void fo_string(va_list);
void fo_float(va_list);
void fo_int(va_list);
void fo_char(va_list);

#endif /* VARIADIC_FUNCTIONS_H */
