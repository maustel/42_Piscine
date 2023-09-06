/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:59:45 by maustel           #+#    #+#             */
/*   Updated: 2023/08/19 16:49:35 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	width(int x, char a, char b, char c)
{
	ft_putchar(a);
	x--;
	while (x > 1)
	{
		ft_putchar(b);
		x--;
	}
	if (x == 1)
	{
		ft_putchar(c);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
	{
		write(1, "error", 5);
		return ;
	}
	width(x, 'A', 'B', 'C');
	y--;
	while (y > 1)
	{
		width (x, 'B', ' ', 'B');
		y--;
	}
	if (y == 1)
	{
		width (x, 'C', 'B', 'A');
	}
}
