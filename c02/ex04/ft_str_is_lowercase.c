/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:32:04 by abertran          #+#    #+#             */
/*   Updated: 2022/07/23 17:12:51 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
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
	printf("%d\n", ft_str_is_lowercase("1234AA56"));
	printf("%d\n", ft_str_is_lowercase("asdadasdafg"));
	printf("%d", ft_str_is_lowercase("as^^-_AA?dafg"));
}
*/
