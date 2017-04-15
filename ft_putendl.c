/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 15:17:32 by dbauduin          #+#    #+#             */
/*   Updated: 2017/04/15 11:58:31 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	if (s)
	{
		ft_putstr(s);
		write(1, "\n", 1);
	}
}
