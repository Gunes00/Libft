#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newchain;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	newchain = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (!newchain)
		return (NULL);
	while (s[i])
	{
		newchain[i] = f(i, s[i]);
		i++;
	}
	newchain[i] = '\0';
	return (newchain);
}
