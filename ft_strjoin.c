#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	size_t	i1;
	size_t	i2;

	i1 = 0;
	i2 = 0;
	if (!s1 || !s2)
		return (0);
	mem = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!mem)
		return (0);
	while (s1[i1])
	{
		mem[i1] = s1 [i1];
		i1++;
	}
	while (s2[i2])
	{
		mem[i1 + i2] = s2[i2];
		i2++;
	}
	mem[i1 + i2] = '\0';
	return (mem);
}
