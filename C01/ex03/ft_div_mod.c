/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:26:21 by maustel           #+#    #+#             */
/*   Updated: 2023/08/22 13:13:47 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// void ft_div_mod(int a, int b, int *div, int *mod);

// int main ()
// {
// 	int* div;
// 	int* mod;

// 	int i;
// 	int m;

// 	div = &i;
// 	mod = &m;

// 	ft_div_mod(7, 0, div, mod);

// 	printf ("div is %d and mod is %d",*div, *mod);

// 	return 0;
// }

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
	{
		write (1, "Coglione!\n", 10);
		return ;
	}
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
