/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_upper_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:30:36 by glucken           #+#    #+#             */
/*   Updated: 2025/10/08 22:36:46 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf_tester_glucken.h"

void    test_upper_hexa( unsigned int x)
{
	int nb_result;
	int nb_expected;

	nb_result = ft_printf("%X", x);
	printf(" --> ");
	nb_expected = printf("%X", x);
	compare_int(nb_result, nb_expected);
}
