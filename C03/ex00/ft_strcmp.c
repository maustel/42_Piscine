/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:56:37 by maustel           #+#    #+#             */
/*   Updated: 2023/08/27 11:33:47 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// #include <string.h>

// int ft_strcmp(char *s1, char *s2);

// int main (void)
// {
//     char s1[] = ",";
// 	char s2[] = "j";

// 	int x = 0;
// 	x = ft_strcmp(s1, s2);
// 	printf("%d \n", x);

// 	x = strcmp(s1, s2);
// 	printf("%d", x);
// 	return 0;
// }

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (s1[a] - s2[a]);
}
