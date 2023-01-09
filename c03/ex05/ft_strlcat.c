/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:04:26 by abertran          #+#    #+#             */
/*   Updated: 2022/07/25 18:21:33 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	sl;
	unsigned int	dl;

	i = 0;
	d = 0;
	while (dest[d] != '\0')
		d++;
	dl = d;
	sl = ft_strlen (src);
	if (size == 0 || size <= dl)
		return (sl + size);
	while ((src[i] != '\0') && (i < size - dl - 1))
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (dl + sl);
}
/*
int	main()
{
	char src[] = "670";
	char dest[] = "12345";
	printf("%d | %s", ft_strlcat(dest, src, 9), dest);
}
*/
/* hacemos una concatenacion tambein pero mas segura.
 * lo vinculamos al tamaño necesario del string.
 *si size en menor a dl no copiara nada y no dira el tamaño que tiene lo que
 queremos agregar
 i < size .... nos lo parara para que no se salga del tamaño del destino
 y lo que quereos copiar.*/
