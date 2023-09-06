/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:54:26 by maustel           #+#    #+#             */
/*   Updated: 2023/09/05 10:36:23 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*p;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	p = malloc(sizeof(int *) * (max - min));
	if (!p)
	{
		*p = 0;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	*range = p;
	return (i);
}

// #include <stdio.h>

// int	main()
// {
// 	int	min = 0;
// 	int max = 21;
// 	int	*range;

// 	printf("%d", ft_ultimate_range(&range, min, max));

// 	return (0);
// }
