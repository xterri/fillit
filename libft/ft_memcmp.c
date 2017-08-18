/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 11:11:34 by anazar            #+#    #+#             */
/*   Updated: 2017/06/08 22:54:52 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;
	size_t			i;

	i = -1;
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while (++i < n)
	{
		if (cs1[i] != cs2[i])
			return (cs1[i] - cs2[i]);
	}
	return (0);
}
