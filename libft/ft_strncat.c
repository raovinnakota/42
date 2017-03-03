/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvinnako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 13:35:50 by rvinnako          #+#    #+#             */
/*   Updated: 2017/03/02 18:38:25 by rvinnako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, size_t n)
{
	int i;
	int j;
	size_t s;

	i = 0;
	j = 0;
	s = 0;
	while (dest[i] != '\0')
		i++;
	while (i < ft_strlen(src) && s <= n)
	{
		dest[i] = src[j];
		i++;
		j++;
		s++;
	}
	dest[i] = '\0';
	return (dest);
}
