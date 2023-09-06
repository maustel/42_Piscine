/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:43:15 by maustel           #+#    #+#             */
/*   Updated: 2023/09/05 11:05:34 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_size(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

void	concat(int size, char	**strs, char *sep, char *conci)
{
	int		i;
	int		n;
	int		j;

	i = 0;
	n = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			conci[n++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size -1)
			conci[n++] = sep[j++];
		i++;
	}
	conci[n] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*conci;
	int		i;
	int		s;

	if (size == 0)
	{
		conci = malloc (sizeof(char *));
		if (!conci)
			return (0);
		else
			return (conci);
	}
	i = 0;
	s = 0;
	while (i < size)
		s = s + get_size(strs[i++]);
	conci = malloc (sizeof(char *) * (s + size));
	if (!conci)
		return (0);
	concat(size, strs, sep, conci);
	return (conci);
}

#include <stdio.h>

int	main()
{
	// char	**strs ;
	char**	strs = malloc(sizeof(char**)*3);
	char *sep = "\n!\n";
	int size = 4;

	// strs = (char*[]){ "Jaja", "Hello", "Lala", "world" };

	strs[0][0] = "-hallo-";
	*strs[1] = "-du-";
	*strs[2] = "Mensch";


	printf("%s", ft_strjoin(size, strs, sep));
	free(ft_strjoin(size, strs, sep));

	return (0);
}