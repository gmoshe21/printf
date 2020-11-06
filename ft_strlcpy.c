/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoshe <gmoshe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 15:24:07 by gmoshe            #+#    #+#             */
/*   Updated: 2020/07/13 18:19:12 by gmoshe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (siz != 0)
	{
		siz--;
		while (siz != 0 && src[i] != '\0')
		{
			dst[i] = ((char*)src)[i];
			i++;
			siz--;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
