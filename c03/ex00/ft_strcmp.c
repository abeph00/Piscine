/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:44:43 by abertran          #+#    #+#             */
/*   Updated: 2022/07/25 16:29:12 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	 main ()
{
	char s1[] = "holaa";
	char s2[] = "hola";
	printf("%d", ft_strcmp(s1,s2));
}
*/
/*0 iguales, numero primer caracter en ascii.*/
