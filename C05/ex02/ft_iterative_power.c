/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:01:01 by maustel           #+#    #+#             */
/*   Updated: 2023/08/29 18:15:14 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	res = nb;
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
// #include <stdio.h>

// int main()
// {
// 	printf("%d", ft_iterative_power(-2, 3));
// 	return 0;
// }