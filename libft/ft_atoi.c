/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvinnako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 13:51:03 by rvinnako          #+#    #+#             */
/*   Updated: 2017/03/02 17:41:11 by rvinnako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int index;
	int result;
	int sign;
	int digit;
	
	index = 0;
	result = 0;
	sign = 1;
	digit = 0;
	while (str[index] == ' ' || str[index] == '\n' || str[index] == '\t'
			|| str[index] == '\f' || str[index] == '\r' || str[index] == '\v')
		index++;
	if (str[index] == '-')
	{
		sign = -1;
		index++;
	}
	if (str[index] == '+')
		index++; 
	while (str[index] != '\0' && ('0' <= str[index] && '9' >= str[index]))
	{
		if (digit > 12)
			return (0);
		result = result * 10 + str[index++] - '0';
		digit++;
	}
	return (sign * result);
}
