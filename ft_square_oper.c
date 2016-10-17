/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square_oper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybalko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 18:58:36 by vrybalko          #+#    #+#             */
/*   Updated: 2016/10/17 21:56:42 by vrybalko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

int		place_square(char **tmp, int i, int j, int size)
{
	int		x;
	int		y;

	y = i;
	x = j;
	while (y < i + size)
	{
		while (x < j + size)
		{
			if (tmp[x][y] == 'o')
				return (0);
			x++;
		}
		x = j;
		y++;
	}
	return (1);
}

char	**fill_square(int j, int i, char **tmp, int size)
{
	int		x;
	int		y;

	y = i;
	x = j;
	while (y < i + size)
	{
		while (x < j + size)
		{
			tmp[x][y] = 'x';
			x++;
		}
		x = j;
		y++;
	}
	return (tmp);
}
