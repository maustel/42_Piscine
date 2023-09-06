/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:59:35 by maustel           #+#    #+#             */
/*   Updated: 2023/08/29 12:36:48 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_chartoint(char *str)
{
	int	nb;

	nb = 0;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (nb);
}

int	ft_atoi(char *str)
{
	int	m;
	int	nb;

	while ((*str < 14 && *str > 8) || *str == 32)
		str++;
	m = 0;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			m++;
		str++;
	}
	nb = ft_chartoint(str);
	if (m % 2 != 0)
		nb = nb * (-1);
	return (nb);
}

// int main()
// {
//     char* str = "-2147483648";
//     int b = ft_atoi(str);

//     printf("%d", b);

//     return (0);
// }
