#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	if (n == 0 || dest == src)
		return (NULL);
	while (i < n)
	{
		str1[i] = str2[i];
		if (str1[i] == (unsigned char ) c)
			return ((void *)dest + i + 1);
		i++;
	}
	return (NULL);
}
