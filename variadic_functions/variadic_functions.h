#ifndef HEADER
#define HEADER

#define getvalu(X)  ((X) > (0) ? (printf(toprint, va_arg(ap, int))) : printf(toprint, (va_arg(ap, double))))
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
