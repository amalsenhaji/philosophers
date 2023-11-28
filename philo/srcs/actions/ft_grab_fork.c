/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grab_fork.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 04:17:50 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:52:21 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	grab_fork(t_philo *philo, int f)
{
	pthread_mutex_lock(&philo->info->forks[f]);
	ft_print_msg(philo, "has taken a fork");
}
