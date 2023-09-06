/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asemsey <asemsey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:08:52 by asemsey           #+#    #+#             */
/*   Updated: 2023/09/03 21:51:34 by asemsey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

int		ft_strlen(char *str);
char	*read_file(char *s);
void	ft_itoa(unsigned int nb, char *dict, char *full);
void	ft_alg_tenthousand(unsigned int nb, int div, char *dict, char *full);
void	ft_alg_ten(unsigned int nb, int div, char *dict, char *full);
void	ft_alg(unsigned int nb, char *dict, char *full);
void	ft_atoi(char *to_print, char *dict, char *full);
void	ft_get_together(char *to_print, char *dict, char *full);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strcat(char *full, char *src);
char	*edit_dict(char *s);
int		ft_error(char *str);

#endif
