/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 23:21:46 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 23:21:47 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*udst;
	unsigned char	*usrc;

	i = 0;
	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	while (i < n)
	{
		udst[i] = usrc[i];
		i += 1;
	}
	return (dst);
}
