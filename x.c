#include "ft_head.h"

int		x(char *str)
{
	int		i;

	i = 0;
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] != '\n')
			i++;
		if (str[i] == '\n')
			i++;
	}
	return (i);
}
