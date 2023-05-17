/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <mmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:56:17 by mmarie            #+#    #+#             */
/*   Updated: 2023/02/16 00:28:12 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ss = (const unsigned char *) s;
	size_t				i;

	i = 0;
	while (i < n && ss[i] != (unsigned char) c)
	{
		i++;
	}
	if (i < n)
	{
		return ((void *) &ss[i]);
	}
	return (NULL);
}
