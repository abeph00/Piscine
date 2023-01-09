/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:58:25 by abertran          #+#    #+#             */
/*   Updated: 2022/07/28 19:18:51 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int cnt;

	i = 0;
	cnt = 0;

	if (argc == 2)
	{
		while (argv [1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				cnt = argv[1][i] - 64;
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				cnt = argv[1][i] - 96;
			while (cnt)
			{
				write(1, &argv[1][i], 1);
				cnt--;
			}
			cnt = 1;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
