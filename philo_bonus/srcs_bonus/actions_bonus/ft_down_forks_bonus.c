/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_down_forks_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 05:01:22 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:53:24 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	ft_down_forks(t_philo *philo)
{
	sem_post(philo->info->forks);
	sem_post(philo->info->forks);
	philo->ate++;
	if (philo->ate == philo->info->number_of_times_each_philosopher_must_eat)
		exit(FT_SUCCESS);
}
