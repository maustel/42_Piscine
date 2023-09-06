/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 15:37:43 by maustel           #+#    #+#             */
/*   Updated: 2023/08/29 16:00:10 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	nb = nb * ft_recursive_factorial(nb -1);
	return (nb);
}
// #include <stdio.h>

// int main()
// {
// 	printf("%d", ft_recursive_factorial(10));
// 	return 0;
// }
