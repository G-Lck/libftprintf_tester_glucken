/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_dec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:28:23 by glucken           #+#    #+#             */
/*   Updated: 2025/10/08 22:34:57 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf_tester_glucken.h"

void    test_dec(int d)
{
	int nb_result;
	int nb_expected;

	nb_result = ft_printf("%d", d);
	printf(" --> ");
	nb_expected = printf("%d", d);
	compare_int(nb_result, nb_expected);
}
