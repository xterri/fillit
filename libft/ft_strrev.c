/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 22:21:21 by anazar            #+#    #+#             */
/*   Updated: 2017/06/11 14:17:12 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	*buffer;

	len = ft_strlen(str) - 1;
	buffer = ft_strnew(len);
	i = 0;
	while (i <= len)
	{
		buffer[i] = str[len - i];
		++i;
	}
	return (buffer);
}
