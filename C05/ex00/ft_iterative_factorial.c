/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:58:48 by maustel           #+#    #+#             */
/*   Updated: 2023/08/29 15:58:55 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	i = 1;
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
// #include <stdio.h>

// int main()
// {
// 	printf("%d", ft_iterative_factorial(10));
// 	return 0;
// }
