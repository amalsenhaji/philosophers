/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_mutex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 04:21:36 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:52:28 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_init_mutex(t_info *info)
{
	int	i;

	i = 0;
	pthread_mutex_init(&info->finish_lock, NULL);
	while (i < info->number_of_philosophers)
		pthread_mutex_init(&info->forks[i++], NULL);
}
