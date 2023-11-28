/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grab_fork_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 05:02:18 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:53:26 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	ft_grab_fork(t_philo *philo)
{
	sem_wait(philo->info->forks);
	ft_print_msg(philo, "has taken a fork");
}
