#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptrs;
	size_t			i;

	ptrs = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		if (ptrs[i] == (unsigned char)c)
			return (ptrs + i);
		i++;
	}
	return (NULL);
}
