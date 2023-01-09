/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:51:05 by abertran          #+#    #+#             */
/*   Updated: 2022/07/22 13:08:15 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers (void)
{
	write(1, "0123456789\n", 11);
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/

