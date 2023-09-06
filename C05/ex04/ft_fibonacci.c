/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:32:33 by maustel           #+#    #+#             */
/*   Updated: 2023/08/29 18:01:22 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	n = ft_fibonacci(index - 1) + ft_fibonacci(index -2);
	return (n);
}
// #include <stdio.h>

// int main()
// {
//     printf("%d", ft_fibonacci(6));

// 	return 0;
// }