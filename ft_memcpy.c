#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	if (n == 0 || dest == src)
		return (dest);
	while (n > 0)
	{
		*str1++ = *str2++;
		n--;
	}
	return (dest);
}
