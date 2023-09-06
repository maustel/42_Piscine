/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:11:45 by maustel           #+#    #+#             */
/*   Updated: 2023/08/23 16:40:58 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// char *ft_strncat(char *dest, char *src, unsigned int nb);

// int main()
// {
//     char src[] = "bella ";
//     char dest[100] = "Ciao ";
//     int nb = 3;

//     printf("%s \n", ft_strncat(dest, src, nb));
//     printf("%s ", strncat(dest, src, nb));

//     return 0;
// }

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	int				e;

	a = 0;
	e = 0;
	while (dest[e] != '\0')
		e++;
	while (src[a] != '\0' && a < nb)
	{
		dest[e] = src[a];
		a++;
		e++;
	}
	dest[e] = '\0';
	return (dest);
}
