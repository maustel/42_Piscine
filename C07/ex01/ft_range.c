/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:52:42 by maustel           #+#    #+#             */
/*   Updated: 2023/08/31 13:52:40 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int *) * (max - min));
	if (min >= max || arr == 0)
		return (0);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

// #include <stdio.h>

// int	main()
// {
// 	int i = 0;
// 	int min;
// 	int max;
// 	int *ar;
// 	int size;

// 	min = -10;
// 	max = 10;
// 	size = max - min;

// 	ar = ft_range(min, max);
// 	while (i < size)
// 	{
// 		printf("%d, ", ar[i]);
// 		i++;
// 	}

// 	return (0);
// }