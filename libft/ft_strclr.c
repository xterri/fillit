/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 12:02:31 by anazar            #+#    #+#             */
/*   Updated: 2017/06/11 14:18:23 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int	i;
	int	len;

	if (!s)
		return ;
	i = -1;
	len = ft_strlen(s);
	while (++i < len)
		s[i] = 0;
}
