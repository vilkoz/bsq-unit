#include "ft_head.h"

int		g_count;
int		g_lengh;
int		g_i;
int		g_n;

int		valid(char *str)
{
	if ((g_i = x(str)) == 0)
		return (0);
	if ((g_n = ft_atoi(str)) == 0)
		return (0);
	if ((g_lengh = ft_strlen_slesh(str)) == 0)
		return (0);
	while (str[g_i] != '\0')
	{
		g_count = 0;
		while (str[g_i] != '\n' && str[g_i] != '\0')
		{
			g_count++;
			g_i++;
			if (g_n == 0)
				return (1);
		}
		if (g_count != g_lengh)
			return (0);
		g_i++;
		g_n--;
		g_count = 0;
	}
	return (1);
}
