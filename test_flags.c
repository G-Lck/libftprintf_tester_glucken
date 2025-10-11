/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 23:14:22 by glucken           #+#    #+#             */
/*   Updated: 2025/10/08 23:14:22 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf_tester_glucken.h"

void	test_flags()
{
	int nb_result;
	int nb_expected;

	// + tests //
	nb_result = ft_printf("%+i, %+i", 3, -3);
	printf(" --> ");
	nb_expected = printf("%+i, %+i", 3, -3);
	compare_int(nb_result, nb_expected);

	nb_result = ft_printf("%+d, %+d", 3, -3);
	printf(" --> ");
	nb_expected = printf("%+d, %+d", 3, -3);
	compare_int(nb_result, nb_expected);

	// tests # //
	nb_result = ft_printf("%#x", 3);
	printf(" --> ");
	nb_expected = printf("%#x", 3);
	compare_int(nb_result, nb_expected);

	nb_result = ft_printf("%#X", 3);
	printf(" --> ");
	nb_expected = printf("%#X", 3);
	compare_int(nb_result, nb_expected);

	// space tests //
	nb_result = ft_printf("% i, % i", 3, -3);
	printf(" --> ");
	nb_expected = printf("% i, % i", 3, -3);
	compare_int(nb_result, nb_expected);

	nb_result = ft_printf("% d, % d", 3, -3);
	printf(" --> ");
	nb_expected = printf("% d, % d", 3, -3);
	compare_int(nb_result, nb_expected);
}
