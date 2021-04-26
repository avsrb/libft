#include "libft.h"

int	ft_atoi(const char *str)
{
	int		negative;
	int		i;
	int		num;
	int		convert;

	negative = 1;
	i = 0;
	convert = 0;
	num = 18;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative = -negative;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (!num--)
			return ((1 + negative) / (-2));
		convert = convert * 10 + (str[i] - '0');
		i++;
	}
	return (convert * negative);
}
