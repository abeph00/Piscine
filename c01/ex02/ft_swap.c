/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:35:56 by abertran          #+#    #+#             */
/*   Updated: 2022/07/19 18:07:34 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
int main (void)
{
	int	x;
	int	y;
	
	x = 5;
	y = 7;
	ft_swap(&x, &y);
	printf("%d \n", x);
	printf("%d \n", y);
}
*/
