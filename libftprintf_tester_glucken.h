#ifndef FT_PRINTF_TESTER_GLUCKEN_H
# define FT_PRINTF_TESTER_GLUCKEN_H

#include <stdio.h>
#include <limits.h>
#include "./libftprintf.h"

#define RED   "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

void	compare_int(int nb_result, int nb_expected);
void    test_char(char c);
void    test_int(int i);
void    test_dec(int d);
void	test_flags(void);
void    test_lower_hexa( unsigned int x);
void    test_percent(void);
void    test_pointer(void* p);
void    test_string(char* s);
void    test_upper_hexa( unsigned int x);
void    test_u_dec(int u);


#endif
