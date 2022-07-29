/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrujas-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 00:53:52 by jrujas-p          #+#    #+#             */
/*   Updated: 2022/07/29 01:49:03 by jrujas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	char *text;
	int i;

	i = 1;
	if (argc > 1)
	{
		while(i < argc)
		{
			text = argv[i];
			write(1, text, ft_strlen(text));
			write(1 , "\n", 1);
			i++;
		}
	}
	return (0);
}
