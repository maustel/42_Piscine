/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:26:23 by maustel           #+#    #+#             */
/*   Updated: 2023/08/23 12:38:52 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int ft_str_is_numeric(char *str);

// int main ()
// {
// 	char* x = "0123456789";
// 	int r;

// 	r = ft_str_is_numeric(x);
// 	printf("r ist %d \n", r);

// 	return (0);

// }

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[a] != '\0')
	{
		if (str[a] < '0' || str[a] > '9')
		{
			return (0);
		}
		a++;
	}
	return (1);
}
