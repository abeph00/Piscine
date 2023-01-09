/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:46:35 by abertran          #+#    #+#             */
/*   Updated: 2022/07/22 16:28:31 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc > 1)
	{
		argc--;
		while( argv[argc][i] != '\0')
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
	}
	write(1, "\n",1);
	return (0);
}	
