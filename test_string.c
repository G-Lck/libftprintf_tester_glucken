/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:28:42 by glucken           #+#    #+#             */
/*   Updated: 2025/10/08 22:35:23 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf_tester_glucken.h"

void    test_string(char* s)
{
	int nb_result;
	int nb_expected;

	nb_result = ft_printf("%s", s);
	printf(" --> ");
	nb_expected = printf("%s", s);
	compare_int(nb_result, nb_expected);
}
