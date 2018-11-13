/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cleaner.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 16:25:38 by dbauduin          #+#    #+#             */
/*   Updated: 2018/11/13 02:39:29 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_cleaner(char **tab)
{
    int count;

    count = -1;
    while (tab[--count])
        free(tab[count]);
    free(tab);
}
