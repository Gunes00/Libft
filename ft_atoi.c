#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	i;
	long	mult;
	long	number;

	i = 0;
	mult = 1;
	number = 0;
	if (nptr[0] == '\0')
		return (i);
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\f' || \
			nptr[i] == '\r' || nptr[i] == '\n' || nptr[i] == '\v')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			mult *= -1;
		i++;
	}
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = number * 10 + (nptr[i] - 48);
		i++;
	}
	number *= mult;
	return (number);
}
