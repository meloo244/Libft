/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <mmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:17:27 by mel               #+#    #+#             */
/*   Updated: 2023/02/16 00:38:39 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss;
	unsigned char	*so;
	size_t			i;

	i = 0;
	ss = (unsigned char *) s1;
	so = (unsigned char *) s2;
	while (i < n)
	{
		if (ss[i] != so[i])
			return (ss[i] - so[i]);
	i++;
	}
	return (0);
}
