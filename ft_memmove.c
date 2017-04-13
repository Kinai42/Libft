/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 01:56:00 by dbauduin          #+#    #+#             */
/*   Updated: 2017/04/12 23:06:17 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*cpy;

	if (!(cpy = (void *)malloc(len * sizeof(void *))))
		return (NULL);
	ft_memcpy(cpy, src, len);
	ft_memcpy(dst, cpy, len);
	free(cpy);
	return (dst);
}
