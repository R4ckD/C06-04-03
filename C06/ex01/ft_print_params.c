/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrujas-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 01:14:12 by jrujas-p          #+#    #+#             */
/*   Updated: 2022/07/29 01:33:34 by jrujas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while(i < argc)
	{
		while(argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		j = 0;
		i++;
	}
}
