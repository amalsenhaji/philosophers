/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sleep_then_think.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 04:19:27 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:52:25 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	sleep_then_think(t_philo *philo)
{
	ft_print_msg(philo, "is sleeping");
	usleep(philo->info->time_to_sleep * 1000);
	ft_print_msg(philo, "is thinking");
}
