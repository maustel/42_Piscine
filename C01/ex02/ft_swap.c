/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:19:12 by maustel           #+#    #+#             */
/*   Updated: 2023/08/21 09:14:18 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>
// void	ft_swap(int *a, int *b);
// int main ()
// {
// 	int a;
// 	int b;

// 	a = 1;
// 	b = 2;
// 	printf("a ist %d und b ist %d \n",a,b);
// 	ft_swap(&a, &b);
// 	printf("a ist %d und b ist %d",a,b);

// 	return 0;

// }

void	ft_swap(int *a, int *b)
{
	int	helpy;

	helpy = *a;
	*a = *b;
	*b = helpy;
}
