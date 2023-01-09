/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:32:18 by abertran          #+#    #+#             */
/*   Updated: 2022/07/19 18:39:44 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int	main(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 10;
	b = 0;

	ft_div_mod(a, b, &c, &d);
	printf("%d\n", c);
	printf("%d", d);
}
*/
