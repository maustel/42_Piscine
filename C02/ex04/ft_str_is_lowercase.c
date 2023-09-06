/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 09:12:03 by maustel           #+#    #+#             */
/*   Updated: 2023/08/22 15:33:06 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int ft_str_is_lowercase(char *str);

// int main ()
// {
//     char str[] = "hjghf";
// 	int x;

// 	x = ft_str_is_lowercase(str);
// 	printf("%d", x);

// 	return (0);
// }

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 'a' || str[a] > 'z')
		{
			return (0);
		}
		a++;
	}
	return (1);
}
