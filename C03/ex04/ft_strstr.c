/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:41:36 by maustel           #+#    #+#             */
/*   Updated: 2023/08/28 10:40:34 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// char *ft_strstr(char *str, char *to_find);

// int main()
// {
//     char* str = "hello mister x, this is mario";
// 	char* to_find = "mister";

// 	printf("%s", strstr(str, to_find));
// }

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	int		a;
	int		e;

	a = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		e = 0;
		if (str[a] == to_find[e])
		{
			start = &str[a];
			while (to_find[e] != '\0' && str[a] == to_find[e])
			{
				a++;
				e++;
			}
			if (to_find[e] == '\0')
				return (start);
		}
		a++;
	}
	return (0);
}
