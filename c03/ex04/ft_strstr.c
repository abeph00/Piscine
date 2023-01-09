/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:14:25 by abertran          #+#    #+#             */
/*   Updated: 2022/07/25 17:37:15 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	d;

	i = 0;
	d = 0;
	if (to_find[d] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + d] == to_find [d] && str[i + d] != '\0')
			d++;
		if (to_find[d] == '\0')
			return (str + i);
		i++;
		d = 0;
	}
	return (0);
}
/*
int	main(void)
{
	char str[] ="Busca aqui en esta linea";
	char f[] = "nono";
	printf("%s", ft_strstr(str, f));
}
*/
/*Comprueba primero is el caracter en la posicion de i es igual
 * al de a posicion de de.
 * Cuando encuentre un caracter distinto se sale y avanza la i y
 * reinicia la d. y vuelve a comrpobar.*/
