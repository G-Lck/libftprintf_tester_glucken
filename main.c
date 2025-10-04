/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:45:04 by glucken           #+#    #+#             */
/*   Updated: 2025/10/04 19:41:48 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf_tester_glucken.h"

int main()
{
	// tests who should work

	// char
	printf("char tests\n");
	test_char('a');
	test_char('0');
	test_char(50);
	test_char(0);

	// decimal
	printf("dec tests\n");
	test_dec(0);
	test_dec(740);
	test_dec(-13);
	test_dec(INT_MIN);
	test_dec(INT_MAX);

	// int
	printf("int tests\n");
	test_int(0);
	test_int(740);
	test_int(-7400);
	test_int(INT_MIN);
	test_int(INT_MAX);

	// test lower hexa
	printf("lower hexa tests\n");
	test_lower_hexa(0);
	test_lower_hexa(740);
	test_lower_hexa(2147483648);

	// test upper hexa
	printf("upper hexa tests\n");
	test_upper_hexa(0);
	test_upper_hexa(740);
	test_upper_hexa(UINT_MAX);

	// test percent
	printf("percent tests\n");
	test_percent();

	// test pointer
	printf("pointer tests\n");
	char    *s1;
	s1 = "Hi";
	test_pointer(&s1);
	test_pointer(NULL);

	// test string
	printf("string tests\n");
	test_string("Hi you");
	test_string("Hi\nyou");
	test_string("");
	test_string("%and?");
	test_string("\0");

	// test u dec
	printf("unsigned int tests\n");
	test_u_dec(0);
	test_u_dec(74);
	test_u_dec(INT_MAX);
	test_u_dec(UINT_MAX);
}
