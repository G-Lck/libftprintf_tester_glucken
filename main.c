/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:45:04 by glucken           #+#    #+#             */
/*   Updated: 2025/10/11 14:28:55 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf_tester_glucken.h"

int main()
{
	// char
	printf("char tests\n");
	test_char('a');
	test_char('0');
	test_char(50);
	test_char(0);

	// decimal
	printf("\ndec tests\n");
	test_dec(0);
	test_dec(740);
	test_dec(-13);
	test_dec(INT_MIN);
	test_dec(INT_MAX);

	// int
	printf("\nint tests\n");
	test_int(0);
	test_int(740);
	test_int(-7400);
	test_int(INT_MIN);
	test_int(INT_MAX);

	// test lower hexa
	printf("\nlower hexa tests\n");
	test_lower_hexa(0);
	test_lower_hexa(740);
	test_lower_hexa(UINT_MAX);

	// test upper hexa
	printf("\nupper hexa tests\n");
	test_upper_hexa(0);
	test_upper_hexa(740);
	test_upper_hexa(UINT_MAX);

	// test percent
	printf("\npercent tests\n");
	test_percent();

	// test pointer
	printf("\npointer tests\n");
	char    *s1;
	s1 = "Hi";
	test_pointer(&s1);
	test_pointer(NULL);

	// test string
	printf("\nstring tests\n");
	test_string("Hi you");
	test_string("Hi\nyou");
	test_string("");
	test_string("%and?");
	test_string("\0");
	test_string(NULL);

	// test u dec
	printf("\nunsigned int tests\n");
	test_u_dec(0);
	test_u_dec(74);
	test_u_dec(INT_MAX);
	test_u_dec(UINT_MAX);

	//flags
	printf("\nflags tests\n");
	test_flags();
}
