/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   encerrar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:37:33 by marvin            #+#    #+#             */
/*   Updated: 2023/02/28 13:37:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

void	encerrar_jogo(t_data *data)
{
	free_total(data);
	exit(0);
}

void	encerrar_jogo_erro(t_data *data)
{
	free_total(data);
	ft_printf("Error\n");
	exit(0);
}
