/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 16:07:15 by dbauduin          #+#    #+#             */
/*   Updated: 2017/04/15 02:52:09 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			k;

	i = 0;
	j = 0;
	k = ft_strlen(src);
	while (dst[i] && i < size)
		i++;
	if (size > 0)
		while (src[j] && i < size - 1)
			dst[i++] = src[j++];
	if (j > 0)
	{
		dst[i] = 0;
		return (k + i - j);
	}
	return (k + i);
}
