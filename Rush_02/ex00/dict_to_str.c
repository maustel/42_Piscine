/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_to_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemsey <asemsey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:49:57 by asemsey           #+#    #+#             */
/*   Updated: 2023/09/03 21:56:17 by asemsey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush.h"

char	*newlines(char *s)
{
	int		i;
	int		j;
	char	*res;

	res = (char *)malloc(ft_strlen(s) + 1);
	if (res == 0)
		return (0);
	i = 0;
	j = 1;
	while (s[i] == '\n' && s[i] != '\0')
		i++;
	res[0] = '\n';
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
		{
			res[j++] = '\n';
			while (s[i] == '\n')
				i++;
		}
		res[j++] = s[i++];
	}
	res[j] = '\0';
	return (res);
}

char	*spaces_1(char *s)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ':' || s[i] == '\n')
		{
			s[j++] = s[i++];
			while (s[i] == ' ')
				i++;
		}
		s[j++] = s[i++];
	}
	s[j] = '\0';
	return (s);
}

char	*spaces_2(char *s)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
		{
			s[j++] = s[i++];
			while ('0' <= s[i] && s[i] <= '9')
				s[j++] = s[i++];
			while (s[i] == ' ')
				i++;
			if (s[i] == ':')
				s[j++] = s[i++];
		}
		s[j++] = s[i++];
	}
	s[j] = '\0';
	return (s);
}

char	*edit_dict(char *s)
{
	s = newlines(s);
	s = spaces_1(s);
	s = spaces_2(s);
	return (s);
}
