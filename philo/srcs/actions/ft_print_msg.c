/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_msg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 04:18:58 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:52:23 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_print_msg(t_philo *philo, char *msg)
{
	pthread_mutex_lock(&philo->info->finish_lock);
	if (!philo->info->finish)
		printf("%lli\t%i\t%s\n", ft_current_time(philo), philo->id + 1, msg);
	pthread_mutex_unlock(&philo->info->finish_lock);
}
