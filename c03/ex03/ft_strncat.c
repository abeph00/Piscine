/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:34:44 by abertran          #+#    #+#             */
/*   Updated: 2022/07/25 20:58:44 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	d;

	i = 0;
	d = 0;
	while (dest[d] != '\0')
		d++;
	while ((src[i] != '\0') && (i < nb))
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char a[] = " and this is source";
	char b[] = "this is destination";
	printf("%s", ft_strncat(b, a, 15));
}
*/
/* la posicion d+i. d se encuentra al final de la linea y empieza a copiar i
 * desde la posicion 0.*/
