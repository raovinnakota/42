/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvinnako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 17:58:27 by rvinnako          #+#    #+#             */
/*   Updated: 2017/03/02 17:04:01 by rvinnako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = ft_strlen(src) + ft_strlen(dst);
	b = ft_strlen(src) + size;
	if (size < a)
		return (b);
	return (a);
}
