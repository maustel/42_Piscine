/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:12:35 by maustel           #+#    #+#             */
/*   Updated: 2023/08/27 15:56:58 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// int ft_strncmp(char *s1, char *s2, unsigned int n);

// int main()
// {
//     char s1[] = "hello";
//     char s2[] = "helolpo";
//     unsigned int n = 3;
// 	int x;

// 	x = ft_strncmp(s1, s2, n);
// 	printf("%d \n", x);

// 	x = strncmp(s1, s2, n);
// 	printf("%d", x);

//     return 0;
// }

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[a] != '\0' && a < n - 1)
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (s1[a] - s2[a]);
}
