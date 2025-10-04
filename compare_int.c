/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glucken <glucken@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 17:32:18 by glucken           #+#    #+#             */
/*   Updated: 2025/10/04 17:32:18 by glucken          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libftprintf_tester_glucken.h"

void	compare_int(int nb_result, int nb_expected)
{
	if (nb_result == nb_expected)
		printf(GREEN " OK");
	else
		printf(RED " FAIL");
	printf(RESET "\n");
}
