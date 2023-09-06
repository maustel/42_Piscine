/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:07:26 by maustel           #+#    #+#             */
/*   Updated: 2023/08/21 09:27:00 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

// int ft_strlen(char *str);

// int main ()
// {
// 	char* str;
// 	str = "123456789";
// 	int length;

// 	length = ft_strlen(str);
// 	printf ("length of string is %d", length);

// 	return 0;
// }

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
