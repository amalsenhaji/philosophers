/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 04:18:08 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:52:22 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_join_free(t_info *info)
{
	int	i;

	i = 0;
	while (i < info->number_of_philosophers)
		pthread_join(info->philo[i++].thread, NULL);
	free(info->philo);
	i = 0;
	while (i < info->number_of_philosophers)
		pthread_mutex_destroy(&info->forks[i++]);
	pthread_mutex_destroy(&info->finish_lock);
	free(info->forks);
	free(info);
}
