/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sleep_then_think_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 05:03:09 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:53:28 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	ft_sleep_then_think(t_philo *philo)
{
	ft_print_msg(philo, "is sleeping");
	usleep(philo->info->time_to_sleep * 1000);
	ft_print_msg(philo, "is thinking");
}
