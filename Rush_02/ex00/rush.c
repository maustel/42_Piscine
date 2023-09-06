/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweidner <pweidner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:07:06 by maustel           #+#    #+#             */
/*   Updated: 2023/09/03 22:04:57 by pweidner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush.h"

void	ft_itoa(unsigned int nb, char *dict, char *full)
{
	char			to_print[20];
	unsigned int	div;
	int				a;
	unsigned int	n;

	div = 1;
	n = nb;
	while (n > 9)
	{
		n = n / 10;
		div = div * 10;
	}
	to_print[0] = '\n';
	a = 1;
	while (div >= 9)
	{
		to_print[a] = (nb / div) + '0';
		nb = nb % div;
		div = div / 10;
		a++;
	}
	to_print[a++] = nb + '0';
	to_print[a++] = ':';
	to_print[a] = '\0';
	ft_get_together(to_print, dict, full);
}

void	ft_alg_tenthousand(unsigned int nb, int div, char *dict, char *full)
{
	if (10000 <= div && div < 1000000)
	{
		ft_alg((nb / 1000), dict, full);
		ft_itoa (1000, dict, full);
		ft_alg((nb % 1000), dict, full);
	}
	if (1000000 <= div && div < 1000000000)
	{
		ft_alg((nb / 1000000), dict, full);
		ft_itoa (1000000, dict, full);
		ft_alg((nb % 1000000), dict, full);
	}
	if (1000000000 <= div)
	{
		ft_alg((nb / 1000000000), dict, full);
		ft_itoa (1000000000, dict, full);
		ft_alg((nb % 1000000000), dict, full);
	}
}

void	ft_alg_ten(unsigned int nb, int div, char *dict, char *full)
{
	if (div == 10 && nb != 0)
	{
		if (nb < 20)
			ft_itoa(nb, dict, full);
		else if (nb >= 20)
		{
			ft_itoa(((nb / div) * 10), dict, full);
			if (nb % div != 0)
				ft_itoa((nb % div), dict, full);
		}
	}
	if (div == 1 && nb != 0)
		ft_itoa (nb, dict, full);
}

void	ft_alg(unsigned int nb, char *dict, char *full)
{
	int				div;
	unsigned int	n;

	div = 1;
	n = nb;
	while (n > 9)
	{
		div = div * 10;
		n = n / 10;
	}
	while (div >= 100 && div < 10000)
	{
		if (nb / div != 0)
		{
			ft_itoa ((nb / div), dict, full);
			ft_itoa (div, dict, full);
		}
		nb = nb % div;
		div = div / 10;
	}
	if (div >= 10000)
		ft_alg_tenthousand(nb, div, dict, full);
	if (div <= 10)
		ft_alg_ten(nb, div, dict, full);
}

void	ft_get_together(char *to_print, char *dict, char *full)
{
	char	*src;
	int		size;

	size = 0;
	while (to_print[size])
		size++;
	src = ft_strstr(dict, to_print);
	if (src == 0)
	{
		full[0] = 2;
		return ;
	}
	full = ft_strcat(full, src);
}
