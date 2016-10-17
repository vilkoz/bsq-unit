/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_nl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybalko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 14:12:03 by vrybalko          #+#    #+#             */
/*   Updated: 2016/10/17 16:45:09 by vrybalko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

void	display_arr(char **tmp, int y)
{
	int		i;

	i = 0;
	while (i < y)
	{
		ft_putnbr(i);
		ft_putstr(" ");
		ft_putstr(tmp[i]);
		i++;
	}
}

char	**cp_cells(char *str, char **tmp)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i] != '\0')
	{
		while (str[i] != '\n')
		{
			tmp[y][x] = str[i];
			x++;
			i++;
		}
		tmp[y][x] = '\n';
		tmp[y][x + 1] = '\0';
		y++;
		x = 0;
		i++;
	}
	return (tmp);
}

char	**ft_split_nl(char *str, int x, int y)
{
	char	**tmp;
	int		i;
	char	*buf;

	i = 0;
	tmp = (char **)malloc(sizeof(tmp) * y);
	while (i <= y)
	{
		tmp[i] = (char *)malloc(sizeof(char) * x * 100);
		i++;
	}
	tmp = cp_cells(str, tmp);
	return (tmp);
}
