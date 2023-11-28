/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 04:58:20 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:53:33 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	ft_puterr(char *err)
{
	write(STDERR_FILENO, err, ft_strlen(err));
	exit(FT_FAILURE);
}
