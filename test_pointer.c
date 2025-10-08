/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_pointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:28:23 by glucken           #+#    #+#             */
/*   Updated: 2025/10/08 22:35:19 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf_tester_glucken.h"

void    test_pointer(void* p)
{
	int nb_result;
	int nb_expected;

	nb_result = ft_printf("%p", p);
	printf(" --> ");
	nb_expected = printf("%p", p);
	compare_int(nb_result, nb_expected);
}
