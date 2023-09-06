/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:29:35 by maustel           #+#    #+#             */
/*   Updated: 2023/08/30 10:59:42 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	i;

	a = 1;
	while (a < argc)
	{
		i = 0;
		while (argv[a][i])
		{
			write (1, &argv[a][i], 1);
			i++;
		}
		write (1, "\n", 1);
		a++;
	}
	return (0);
}
