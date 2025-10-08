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
	printf("le flag +: %+i, %+d\n", 3, 3);
	printf("le.flag.' ':.% i,.% d\n", 3, -3);
	printf("le flag #: %#x, %#X\n", 6, 6);
	printf("le flag 0: %05i   \n", 2);
	printf("le flag .: %.i je comprend pas\n", 7);
	printf("le flag -: %-i   \n", 88);
}
