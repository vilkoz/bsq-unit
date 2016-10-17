/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybalko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 17:40:25 by vrybalko          #+#    #+#             */
/*   Updated: 2016/10/17 20:48:20 by vrybalko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"
#include <stdio.h>

char	**ft_find_square(char **tmp, int x, int y)
{
	int		size;
	int		i;
	int		j;
	int		pls;
	int		is_end;

	size = 1;
	i = 0;
	j = 0;
	is_end = 0;
	while (size <= x || size <= y)
	{
		while (i <= y - size)
		{
			while (j <= x - size)
			{
				if ((pls = place_square(tmp, i, j, size)) == 1)
				{
					printf("pls = 1, size =%d,i = %d, j = %d\n", size, i, j);
					break ;
				}
				printf("pls = 0, size =%d,i = %d, j = %d\n", size, i, j);
				j++;
			}
			if (pls == 1)
				break ;
			i++;
			j = 0;
		}
		if (is_end)
		{
			printf("end size = %d, i = %d, j = %d", size, i, j);
			break ;
		}
		if (pls == 0 && !is_end)
		{
			printf("last size = %d\n", size);
			size -= 2;
			is_end = 1;
		}
		size++;
		i = 0;
		j = 0;
	}
	if (pls == 1)
		return (fill_square(j, i, tmp, size));
	else
		return (0);
}
