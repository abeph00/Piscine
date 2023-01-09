/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:32:04 by abertran          #+#    #+#             */
/*   Updated: 2022/07/23 17:25:26 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
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
	printf("%d\n", ft_str_is_uppercase("1234AA56"));
	printf("%d\n", ft_str_is_uppercase("SJFJAA"));
	printf("%d", ft_str_is_uppercase("as^^-_AA?dafg"));
}
*/
