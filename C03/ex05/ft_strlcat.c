/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:25:40 by maustel           #+#    #+#             */
/*   Updated: 2023/08/28 10:40:12 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

// int main()
// {
// 	char	src[] = "Tes";
// 	char	dest[] = "Testanol";
// 	int size = 3;
// 	unsigned int r;

// 	r = ft_strlcat(dest, src, size);
// 	printf("r=%d\nsize=%d\n", r, size);
// 	printf("%s", dest);

// 	return (0);

// }

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	dlen;
	unsigned int	slen;

	a = 0;
	dlen = 0;
	slen = 0;
	while (dest[dlen] != '\0')
		dlen++;
	while (src[slen] != '\0')
		slen++;
	if (dlen >= size)
		return (slen + size);
	while (src[a] != '\0' && dlen + a + 1 < size)
	{
		dest[dlen + a] = src[a];
		a++;
	}
	if (dlen + slen < size)
		dest[dlen + a] = '\0';
	return (dlen + slen);
}
