/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:59:28 by maustel           #+#    #+#             */
/*   Updated: 2023/08/22 13:33:04 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>
// #include <stdlib.h>

// char *ft_strcpy(char *dest, char *src);

// int main ()
// {
//     char src[] = "You just lost the game";
//     char *dest = malloc(sizeof(src));

// 	dest = ft_strcpy(dest, src);

// 	printf("Source is: %s \n", src);
// 	printf("Destination is: %s \n", dest);

//     return 0;
// }

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
