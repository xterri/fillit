/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 17:51:08 by anazar            #+#    #+#             */
/*   Updated: 2017/06/16 15:17:56 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int		i;

	i = (n <= 0) ? 1 : 0;
	while (n != 0)
	{
		n /= 10;
		++i;
	}
	return (i);
}

static void	help(char *buffer, int num, int index)
{
	if (num >= 10 || num <= -10)
	{
		help(buffer, num / 10, index - 1);
		help(buffer, num % 10, index);
	}
	else
	{
		if (num >= 0)
			buffer[index] = (num + 48);
		else
			buffer[index] = (-num + 48);
	}
}

char		*ft_itoa(int n)
{
	int		len;
	char	*buffer;

	len = ft_intlen(n);
	buffer = ft_strnew(len);
	if (!buffer)
		return (NULL);
	if (n < 0)
		buffer[0] = '-';
	--len;
	help(buffer, n, len);
	buffer[len + 1] = 0;
	return (buffer);
}
