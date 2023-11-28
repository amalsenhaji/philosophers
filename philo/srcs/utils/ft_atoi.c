/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 04:14:24 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:52:29 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v'
		||c == '\r' || c == '\f' || c == '\n')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		return (-1);
	else if (str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		res = (res * 10) + (str[i++] - '0');
	}
	return (res * sign);
}
