/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoshe <gmoshe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 15:21:02 by gmoshe            #+#    #+#             */
/*   Updated: 2020/07/13 18:19:02 by gmoshe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void		*ft_calloc(size_t number, size_t size)
{
	unsigned char	*str;

	str = (unsigned char*)malloc(sizeof(char) * (number * size));
	if (str)
	{
		ft_memset(str, 0, number * size);
		return ((void*)str);
	}
	else
		return (NULL);
}
