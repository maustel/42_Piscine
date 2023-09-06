/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 09:32:04 by maustel           #+#    #+#             */
/*   Updated: 2023/08/22 15:35:03 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// int ft_str_is_printable(char *str);

// int main ()
// {
//     char str[] = "\n";
// 	int x;

// 	x = ft_str_is_printable(str);
// 	printf("%d", x);

// 	return (0);
// }

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0' )
	{
		if (str[a] < 32 || str[a] > 126)
		{
			return (0);
		}
		a++;
	}
	return (1);
}
