/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:22:42 by abertran          #+#    #+#             */
/*   Updated: 2022/07/25 18:32:56 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d;

	i = 0;
	d = 0;
	while (dest[d] != '\0')
		d++;
	while (src[i] != '\0')
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (dest);
}
/*
int	main()
{
	char a[] = " and this is source";
	char b[] = "asdis is destination";
	printf("%s", ft_strcat(b, a));

}
*/
