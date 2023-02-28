/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_x_y.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:40:42 by marvin            #+#    #+#             */
/*   Updated: 2023/02/28 13:40:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	funcao_x(int fd)
{
	char	*s;
	int		x;
	int		temp;

	s = get_next_line(fd);
	x = ft_strlen(s) - 1;
	temp = x;
	free(s);
	while ((s = get_next_line(fd)))
	{
		x = ft_strlen(s) - 1;
		free(s);
		if (temp != x)
			return (-1);
	}
	return (x);
}

int	funcao_y(int fd)
{
	char	*s;
	int		y;

	y = 0;
	while ((s = get_next_line(fd)))
	{
		y++;
		free(s);
	}
	return (y);
}