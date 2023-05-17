/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarie <mmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:06:47 by mmarie            #+#    #+#             */
/*   Updated: 2023/02/16 00:09:21 by mmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	valeur;
	int	nb_moins;

	i = 0;
	valeur = 0;
	nb_moins = 1;
	while (nptr[i] && ((nptr[i] < 14 && nptr[i] > 8) || nptr[i] == 32))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			nb_moins *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		valeur = valeur * 10 + nptr[i] - '0';
		i++;
	}
	valeur *= nb_moins;
	return (valeur);
}
