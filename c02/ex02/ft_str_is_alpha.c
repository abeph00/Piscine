/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:32:04 by abertran          #+#    #+#             */
/*   Updated: 2022/07/24 17:18:09 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main (void)
{
	printf("%d\n", ft_str_is_alpha("abSSSdef"));
	printf("%d\n", ft_str_is_alpha("1231231º"));
	printf("%d", ft_str_is_alpha("asdad-_¡1dafg"));
}
*/
