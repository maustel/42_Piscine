/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:24:42 by maustel           #+#    #+#             */
/*   Updated: 2023/08/27 13:29:02 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void ft_putstr(char *str);

// int main()
// {
//     char str[] = "Hellooo";
// 	ft_putstr(str);

// 	return 0;
// }

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		write(1, &str[a], 1);
		a++;
	}
}
