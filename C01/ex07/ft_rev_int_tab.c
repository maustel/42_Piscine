/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:27:27 by maustel           #+#    #+#             */
/*   Updated: 2023/08/21 11:22:06 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// void ft_rev_int_tab(int *tab, int size);

// int main ()
// {
//     int size;
// 	int tab[9] = {1,2,3,4,5,6,7,8,9};
// 	int a;

// 	size = 0;

// 	while(size < 9)
// 	{
// 		printf("%d", tab[size]);
// 		size++;
// 	}
// 	printf("\nsize ist %d\n", size);

// 	ft_rev_int_tab(tab, size);

// 	size = 0;
// 	while(size < 9)
// 	{
// 		printf("%d", tab[size]);
// 		size++;
// 	}

//     return 0;
// }

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	helpy;

	a = 0;
	while (size > a)
	{
		helpy = tab[a];
		tab[a] = tab[size - 1];
		tab [size - 1] = helpy;
		size--;
		a++;
	}
}	
