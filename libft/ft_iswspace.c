/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswspace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 11:46:19 by hyshin            #+#    #+#             */
/*   Updated: 2019/11/13 11:43:11 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iswspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v'
	|| c == '\f' || c == '\r')
		return (1);
	return (0);
}
