/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_msg_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 05:02:56 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:53:27 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	ft_print_msg(t_philo *philo, char *msg)
{
	if (!philo->should_die)
		printf("%lli\t%i\t%s\n", ft_current_time(philo), philo->id + 1, msg);
}
