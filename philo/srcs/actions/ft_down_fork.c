/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_down_fork.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 04:17:14 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:52:20 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	down_fork(t_philo *philo, int f1, int f2)
{
	pthread_mutex_unlock(&philo->info->forks[f1]);
	pthread_mutex_unlock(&philo->info->forks[f2]);
}
