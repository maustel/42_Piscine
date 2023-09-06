/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 09:56:59 by maustel           #+#    #+#             */
/*   Updated: 2023/08/21 09:19:45 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

// void ft_ultimate_div_mod(int *a, int *b);

// int main ()
// {
//     int x = 5;
//     int y = 2;
//     int* a;
//     int* b;

//     a = &x;
//     b = &y;

//     printf("a ist %d und b ist %d\n",*a , *b);

//     ft_ultimate_div_mod(a, b);

//     printf("a ist %d und b ist %d",*a , *b);

//     return 0;

// }    

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	helpy1;
	int	helpy2;

	helpy1 = *a / *b;
	helpy2 = *a % *b;
	*a = helpy1;
	*b = helpy2;
}
