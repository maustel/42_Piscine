/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:44:38 by maustel           #+#    #+#             */
/*   Updated: 2023/08/29 09:58:36 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_inttochar(int nb)
{
	char	c;
	int		div;
	int		a;
	int		n;

	div = 1;
	n = nb;
	while (n > 9)
	{
		n = n / 10;
		div = div * 10;
	}
	a = 0;
	while (div > 9)
	{
		c = (nb / div) + '0';
		write(1, &c, 1);
		nb = nb % div;
		div = div / 10;
		a++;
	}
	c = nb + '0';
	return (c);
}

void	ft_putnbr(int nb)
{
	char	x;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * (-1);
	}
	x = ft_inttochar(nb);
	write (1, &x, 1);
}
// int	main()
// {
// 	ft_putnbr(-2147483648);
// 	return (0);
// }