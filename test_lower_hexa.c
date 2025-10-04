/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lower_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:30:36 by glucken           #+#    #+#             */
/*   Updated: 2025/10/04 18:33:42 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf_tester_glucken.h"

void    test_lower_hexa( unsigned int x)
{
	int nb_result;
	int nb_expected;

	nb_result = ft_printf("%x", x);
	printf(" --> ");
	nb_expected = printf("%x", x);
	compare_int(nb_result, nb_expected);
	printf("\n");
}
