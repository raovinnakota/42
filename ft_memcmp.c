/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvinnako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 18:59:22 by rvinnako          #+#    #+#             */
/*   Updated: 2017/03/05 19:02:16 by rvinnako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *mem1;
	const unsigned char *mem2;

	mem1 = (const unsigned char *)(s1);
	mem2 = (const unsigned char *)(s2);
	while (n > 0)
	{
		if (*mem1 != *mem2)
			return ((unsigned char)(*mem1) - (unsigned char)(*mem2));
		mem1++;
		mem2++;
		n--;
	}
	return (0);
}
