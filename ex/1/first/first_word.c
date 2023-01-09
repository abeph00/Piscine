/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:52:14 by abertran          #+#    #+#             */
/*   Updated: 2022/07/28 13:20:32 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == 9 || argv[1][i] == 32)
			i++;
		while (argv[1][i] != '\0' && argv[1][i] != 9 && argv[1][i] != 32)
			{
				write(1, &argv[1][i], 1);
				i++;
			}
	}
	write(1, "\n", 1);
	return (0);
}
