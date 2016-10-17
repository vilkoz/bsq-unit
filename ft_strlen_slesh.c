/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_slesh.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybalko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 17:38:31 by vrybalko          #+#    #+#             */
/*   Updated: 2016/10/17 17:43:33 by vrybalko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

int		ft_strlen_slesh(char *str)
{
	int		i;
	int		lengh;

	lengh = 0;
	i = x(str);
	while (str[i] != '\n')
	{
		i++;
		lengh++;
	}
	return (lengh);
}
