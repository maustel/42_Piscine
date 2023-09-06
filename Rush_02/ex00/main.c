/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweidner <pweidner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:31:58 by pweidner          #+#    #+#             */
/*   Updated: 2023/09/03 22:56:24 by pweidner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>
#include "rush.h"
#include <stdlib.h>

void	start(char *str, char *to_print);
void	remove_space(char *str);
char	*ft_strcpy(char *dest, char *src);

int	main(int argc, char **argv)
{
	char	*dict;

	dict = "numbers.dict";
	if (argc == 2)
	{
		start(dict, (argv[1]));
	}
	else if (argc == 3)
	{
		if (argv[1] == 0)
			return (0);
		start(argv[1], (argv[2]));
	}
	else
	{
		write(1, "Wrong amount of arguments.", 26);
		return (0);
	}
	return (1);
}

void	start(char *str, char *to_print)
{
	char		*dict;
	char		*full;
	int			i;

	dict = malloc(sizeof(char) * 900);
	full = malloc(sizeof(char) * 900);
	if (read_file(str) == 0)
		return ;
	ft_strcpy(dict, read_file(str));
	ft_strcpy(dict, edit_dict(dict));
	ft_atoi(to_print, dict, full);
	i = 1;
	if (ft_error(full) == 1)
	{
		remove_space(full);
	}
	free(dict);
	free(full);
}

void	remove_space(char *str)
{
	int		i;

	i = 1;
	while (str[i] != 0)
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
			i++;
		else if (32 > str[i] || str[i] > 126)
		{
			i++;
			continue ;
		}
		else
		{
			write (1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

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
	free(src);
	return (dest);
}
