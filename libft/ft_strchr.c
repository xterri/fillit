/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 12:35:59 by anazar            #+#    #+#             */
/*   Updated: 2017/06/08 16:24:15 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int n)
{
	int	i;

	i = -1;
	while (++i < (int)ft_strlen(str) + 1)
	{
		if (*(str + i) == (char)n)
			return ((char *)str + i);
	}
	return (NULL);
}
