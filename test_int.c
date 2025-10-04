/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:28:23 by glucken           #+#    #+#             */
/*   Updated: 2025/10/04 18:46:27 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf_tester_glucken.h"

void    test_int(int i)
{
	int nb_result;
	int nb_expected;

	nb_result = ft_printf("%i", i);
	printf(" --> ");
	nb_expected = printf("%i", i);
	compare_int(nb_result, nb_expected);
	printf("nb_result is: %i and nb_expected is: %i", nb_result, nb_expected);
	printf("\n");
}
