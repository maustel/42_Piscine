/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:37:27 by maustel           #+#    #+#             */
/*   Updated: 2023/08/23 16:23:13 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// char *ft_strcat(char *dest, char *src);

// int main()
// {
// 	char src[] = "tanto bene ";
// 	char dest[50] = "Ciao, ti voglio ";

// 	printf("%s \n", ft_strcat(dest, src));
// 	printf("%s ", strcat(dest, src));

// 	return 0;
// }

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	e;

	a = 0;
	e = 0;
	while (dest[e] != '\0')
		e++;
	while (src[a] != '\0')
	{
		dest[e] = src[a];
		a++;
		e++;
	}
	dest[e] = '\0';
	return (dest);
}
