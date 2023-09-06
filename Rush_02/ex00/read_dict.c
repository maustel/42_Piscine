/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:39:18 by pweidner          #+#    #+#             */
/*   Updated: 2023/09/05 14:26:06 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "rush.h"

char	*read_file(char *s)
{
	char	*buffer;
	int		bytes_read;
	int		fd;

	buffer = (char *)malloc(2000);
	if (buffer == NULL)
		return (NULL);
	fd = open(s, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	bytes_read = read(fd, buffer, 2000);
	if (bytes_read == -1)
	{
		write(1, "Dict Error\n", 11);
		close(fd);
		return (0);
	}
	close(fd);
	return (buffer);
}
