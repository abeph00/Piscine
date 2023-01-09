/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:16:56 by abertran          #+#    #+#             */
/*   Updated: 2022/07/19 18:37:05 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	cmb;

	i = 0;
	while (i < (size / 2))
	{
		cmb = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = cmb;
		i++;
	}
}
/*
int	main(void)
{
	int tab[4] = {1,2,3,4};
	int size = 4;
	
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d", tab[0], tab [1], tab[2], tab[3]);
	return 0;
}
*/
