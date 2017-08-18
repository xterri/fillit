/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 12:28:03 by anazar            #+#    #+#             */
/*   Updated: 2017/06/08 23:06:44 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		if (src[i] == '\0')
		{
			while (i < n)
			{
				dest[i] = 0;
				++i;
			}
		}
		else
			dest[i] = src[i];
	}
	return (dest);
}
