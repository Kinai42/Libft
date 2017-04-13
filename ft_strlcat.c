/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 16:07:15 by dbauduin          #+#    #+#             */
/*   Updated: 2017/04/12 23:57:27 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	dstlen = 0;
	while (*dst++)
		dstlen++;
	dstlen -= 1;
	if (dstlen >= size)
		return (size + srclen);
	while (src && size--)
		*dst++ = *src++;
	*dst = '\0';
	return (dstlen + srclen);
}
