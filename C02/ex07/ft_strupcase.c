/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 09:49:07 by maustel           #+#    #+#             */
/*   Updated: 2023/08/22 15:36:56 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

// char *ft_strupcase(char *str);

// int main ()
// {
//     char str[] = "jdk hH.jdkH";
//     char *new = malloc(sizeof(str));

//     new = ft_strupcase(str);
//     printf("%s", new);

//     return (0);
// }

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
