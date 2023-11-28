/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_time_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 04:56:50 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:53:32 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

t_loong	ft_get_time(void)
{
	t_time	current_time;

	gettimeofday(&current_time, NULL);
	return (current_time.tv_sec * 1000 + current_time.tv_usec / 1000);
}

t_loong	ft_current_time(t_philo *philo)
{
	t_loong	time;

	time = ft_get_time() - philo->info->creation_time;
	return (time);
}
