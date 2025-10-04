/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:28:23 by glucken           #+#    #+#             */
/*   Updated: 2025/10/04 18:33:47 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf_tester_glucken.h"

void    test_percent(void)
{
	int nb_result;
	int nb_expected;

	nb_result = ft_printf("%%");
	printf(" --> ");
	nb_expected = printf("%%");
	compare_int(nb_result, nb_expected);
	printf("\n");

	nb_result = ft_printf("%%%%");
	printf(" --> ");
	nb_expected = printf("%%%%");
	compare_int(nb_result, nb_expected);
	printf("\n");

	nb_result = ft_printf("%%%c", 'a');
	printf(" --> ");
	nb_expected = printf("%%%c", 'a');
	compare_int(nb_result, nb_expected);
	printf("\n");
}
