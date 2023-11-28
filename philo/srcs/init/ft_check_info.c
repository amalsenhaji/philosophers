/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_info.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 04:19:57 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:52:26 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_check_info(t_info info, int ac)
{
	if (ac == 6 && info.number_of_times_each_philosopher_must_eat <= 0)
		return (ft_puterr("ERROR: wrong num of must eat\n"));
	if (info.number_of_philosophers < 0)
		return (ft_puterr("ERROR: wrong num of philo\n"));
	if (info.time_to_die < 60)
		return (ft_puterr("ERROR: wrong time to die\n"));
	if (info.time_to_eat < 60)
		return (ft_puterr("ERROR: wrong time to eat\n"));
	if (info.time_to_sleep < 60)
		return (ft_puterr("ERROR: wrong time to sleep\n"));
	return (FT_SUCCESS);
}
