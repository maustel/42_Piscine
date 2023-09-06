/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweidner <pweidner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:52:18 by asemsey           #+#    #+#             */
/*   Updated: 2023/09/03 22:59:24 by pweidner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush.h"

void	ft_atoi(char *to_print, char *dict, char *full)
{
	long	nb;
	int		size;

	while ((*to_print < 14 && *to_print > 8) || *to_print == 32)
		to_print++;
	nb = 0;
	size = 0;
	while (to_print[size])
	{
		if (to_print[size] < '0' || to_print[size] > '9')
		{
			write (1, "Error", 5);
			return ;
		}
		nb = nb * 10 + (to_print[size] - '0');
		size++;
	}
	if (nb > 4294967295)
	{
		write (1, "Error", 5);
		return ;
	}
	if (nb == 0)
		ft_get_together("\n0:", dict, full);
	ft_alg((unsigned int)nb, dict, full);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str != 0)
	{
		i++;
		str++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == 0)
		return (str);
	while (str[i] != 0)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && to_find[j] != 0)
				j++;
			if (to_find[j] == 0)
			{
				return (&str[i + j]);
			}
		}
		i++;
	}
	return (0);
}

char	*ft_strcat(char *full, char *src)
{
	int	a;
	int	e;

	a = 0;
	e = 0;
	while (full[e])
		e++;
	full[e++] = ' ';
	while (src[a] != '\n')
	{
		full[e] = src[a];
		a++;
		e++;
	}
	full[e] = '\0';
	return (full);
}

int	ft_error(char *str)
{
	while (*str)
	{
		if (*str == 2)
		{
			write(1, "Dict Error\n", 11);
			return (0);
		}
		str++;
	}
	return (1);
}
