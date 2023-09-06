/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:43:23 by maustel           #+#    #+#             */
/*   Updated: 2023/08/27 11:26:39 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// char *ft_strncpy(char *dest, char *src, unsigned int n);

// int main (void)
// {
//    char src[] = "ABCDEKjhfjdkd";
// 	char dest[40];
// 	printf("%s\n", ft_strncpy(dest, src, 8));
// 	printf("%s\n", strncpy(dest, src, 8));
// 	return (0);
// }

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
