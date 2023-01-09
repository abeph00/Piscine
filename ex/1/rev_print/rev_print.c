/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:55:26 by abertran          #+#    #+#             */
/*   Updated: 2022/07/28 20:04:35 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			i++;
		}
		while (i >= 0)
		{
			write(1, &argv[1][i], 1);
			i--;
		}
		argc++;
	}
	write(1, "\n", 1);
	return (0);
}
