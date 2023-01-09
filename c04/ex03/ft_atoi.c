/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:23:23 by abertran          #+#    #+#             */
/*   Updated: 2022/09/27 17:22:15 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	n;

	res = 0;
	n = 0;
	sign = 1;
	while (str[n] == 32 || (str[n] >= 9 && str[n] <= 13))
		n++;
	while (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			sign *= -1;
		n++;
	}
	res = 0;
	while (str[n] >= '0' && str[n] <= '9')
	{
		res = res * 10 + str[n] - '0';
		n++;
	}
	return (res * sign);
}

/*
int main()
{
	char a[] = " ---+--+1234ab567"; 
	printf("%i\n", ft_atoi(a));
}
*/
/* primero nos encargamos de los espacios
 * luego de los signos y luego hacemos la conversion.
 * apuntes cuaderno, vamos añadiendo decenas y moviendo la coma*/
