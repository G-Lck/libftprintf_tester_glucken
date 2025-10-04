/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:30:36 by glucken           #+#    #+#             */
/*   Updated: 2025/10/04 18:33:24 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf_tester_glucken.h"

void    test_char(char c)
{
	int nb_result;
	int nb_expected;

	nb_result = printf("%c", c);
	printf(" --> ");
	nb_expected = printf("%c", c);
	compare_int(nb_result, nb_expected);
	printf("\n");
}
