/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:59:06 by maustel           #+#    #+#             */
/*   Updated: 2023/08/31 13:52:46 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		a;

	a = 0;
	while (src[a])
		a++;
	copy = malloc(sizeof(char *) * a + 1);
	if (!copy)
		return (0);
	a = 0;
	while (src[a])
	{
		copy[a] = src[a];
		a++;
	}
	copy[a] = 0;
	return (copy);
}

// #include <stdio.h>

// int	main()
// {
// 	char *src = "Buongiorno bello, ho fatto colazione con i brezelini";
// 	//char *src = "";
// 	printf("%s", ft_strdup(src));

// 	return (0);
// }