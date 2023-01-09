/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:24:27 by abertran          #+#    #+#             */
/*   Updated: 2022/07/14 17:44:43 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numero;

	numero = '0';
	while (numero <= '9')
	{
		write (1, &numero, 1);
		numero ++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
