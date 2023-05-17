/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel <mel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 22:49:35 by mel               #+#    #+#             */
/*   Updated: 2023/02/22 15:11:24 by mel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

static int	ft_numlen(int n)
{
	int	len;

	len = 1;
	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		sign;
	int		size;

	sign = 0;
	if (n < 0)
		sign = 1;
	size = ft_numlen(n);
	result = (char *)malloc(sizeof(char) * (size + sign + 1));
	if (!result)
		return (NULL);
	result[size + sign] = '\0';
	while (size-- > 0)
	{
		result[size + sign] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	if (sign == 1)
		result[0] = '-';
	return (result);
}
