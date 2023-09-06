/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 09:24:44 by maustel           #+#    #+#             */
/*   Updated: 2023/08/22 15:34:11 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int ft_str_is_uppercase(char *str);

// int main()
// {
//     char str[] ="ddkkj,";
//     int x;

//     x = ft_str_is_uppercase(str);
//     printf("%d", x);

//     return (0);
// }

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0' )
	{
		if (str[a] < 'A' || str[a] > 'Z')
		{
			return (0);
		}
		a++;
	}
	return (1);
}
