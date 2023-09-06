/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 09:59:31 by maustel           #+#    #+#             */
/*   Updated: 2023/08/22 15:38:21 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

// char *ft_strlowcase(char *str);

// int main()
// {
//     char str[] = "Lhdh KSJKDH:KG fdH? JLdghl";
//     char* new = malloc(sizeof(str));

//     new = ft_strlowcase(str);

//     printf("%s", new);

//     return (0);
// }

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] = str[a] + 32;
		}
		a++;
	}
	return (str);
}
