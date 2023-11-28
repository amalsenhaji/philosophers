/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 05:01:49 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:53:25 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	ft_free_all(t_info *info)
{
	int	ret;
	int	i;

	i = -1;
	while (++i < info->number_of_philosophers)
	{
		waitpid(-1, &ret, 0);
		if (ret != 0)
		{
			i = 0;
			while (i < info->number_of_philosophers)
				kill(info->id_table[i++], 15);
			break ;
		}
	}
	sem_close(info->forks);
	free(info->id_table);
	free(info);
}
