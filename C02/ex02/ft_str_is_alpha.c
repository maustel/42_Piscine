/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:06:25 by maustel           #+#    #+#             */
/*   Updated: 2023/08/22 15:28:27 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int ft_str_is_alpha(char *str);

// int main ()
// {
// 	char* x = "fjfhdADJH";
// 	int r;

// 	r = ft_str_is_alpha(x);
// 	printf("r ist %d \n", r);

// 	return (0);

// }

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 'A' || str[a] > 'z' || (str[a] > 'Z' && str[a] < 'a'))
		{
			return (0);
		}
		a++;
	}
	return (1);
}
