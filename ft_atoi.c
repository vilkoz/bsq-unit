/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrybalko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 13:07:19 by vrybalko          #+#    #+#             */
/*   Updated: 2016/10/11 11:56:29 by vrybalko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_is_neg;
int		g_is_plus;

void	ft_putchar(char c);

void	check_symbol(char *str)
{
	if (*str == '-')
		g_is_neg = -1;
	if (*str == '+')
		g_is_plus = 1;
}

int		fix_overflow(void)
{
	if (g_is_neg)
		return (-1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int		res;
	int		case_fix;

	res = 0;
	case_fix = 0;
	g_is_neg = 1;
	g_is_plus = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32 || *str == '-' || *str == 43)
	{
		if (g_is_neg == -1 || g_is_plus == 1)
			return (0);
		check_symbol(str);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (case_fix >= 19)
			return (fix_overflow());
		case_fix++;
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * g_is_neg);
}
