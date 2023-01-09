/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:24:58 by abertran          #+#    #+#             */
/*   Updated: 2022/07/19 18:20:31 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main (void)
{
	int d;
	int e;

	d = 10;
	e = 5;

	ft_ultimate_div_mod(&d, &e);
	printf("%d \n", d);
	printf("%d", e);
}
*/
