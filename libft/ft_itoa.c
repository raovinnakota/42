/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvinnako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 13:53:41 by rvinnako          #+#    #+#             */
/*   Updated: 2017/03/09 13:53:43 by rvinnako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		ft_numlen(int n)
{
	int i;

	i = 0;
	if (i == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res

	len = ft_numlen(n);
	if (n < 0)
		len++;
	res = (char *)malloc(sizeof(*res) * (len + 1));
	if (res == NULL)
		return (0);
	res[len] = '\0';
	len--;
	while (len => 0)
	{
		res[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	if (res[0] == '0')
		res[0] = '-';
	return (res);
}

int		main()
{
	printf("%s\n", ft_itoa(459));
	return (0);
}