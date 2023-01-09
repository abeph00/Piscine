/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:32:04 by abertran          #+#    #+#             */
/*   Updated: 2022/07/23 17:03:36 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main (void)
{
	printf("%d\n", ft_str_is_numeric("123456"));
	printf("%d\n", ft_str_is_numeric("asdadas1dafg"));
	printf("%d", ft_str_is_numeric("as^^-_?dafg"));
}
*/
