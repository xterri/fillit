/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 15:00:22 by anazar            #+#    #+#             */
/*   Updated: 2017/06/08 22:41:43 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	int			i;
	int			f;
	int			out;

	i = 0;
	f = 1;
	out = 0;
	while (ft_iswhitespace(str[i]))
		++i;
	if (str[i] == '-')
		f = -1;
	if (str[i] == '+' || str[i] == '-')
		++i;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		out = out * 10 + (str[i] - '0');
		++i;
	}
	return (f * out);
}
