/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eating_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 05:01:32 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:53:24 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	ft_eating(t_philo *philo)
{
	philo->last_meal = ft_get_time();
	ft_print_msg(philo, "is eating");
	usleep(philo->info->time_to_eat * 1000);
}
