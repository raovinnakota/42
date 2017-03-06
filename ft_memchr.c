/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvinnako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 18:46:11 by rvinnako          #+#    #+#             */
/*   Updated: 2017/03/05 18:59:14 by rvinnako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char		ch;
	const unsigned char	*mems;

	ch = (unsigned char)(c);
	mems = (unsigned char *)(s);
	while (n > 0)
	{
		if (*mems == ch)
			return ((void *)(mems));
		mems++;
		n--;
	}
	return (NULL);
}
