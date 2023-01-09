/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:32:57 by abertran          #+#    #+#             */
/*   Updated: 2022/07/26 14:35:05 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
int main()
{
	char s1[] = "hal";
	char s2[] = "helio";
	printf("%d", ft_strncmp(s1, s2, 9));
}
*/
/* Comapra letra a letra hasta que encuentra una 
 * que es distinta a 0, 
 * lo hara en n numero de caracteres 
 * y te daa el resultado del primero que sea diferente*/
