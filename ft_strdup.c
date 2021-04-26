#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*mem;

	i = 0;
	mem = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!mem)
		return (0);
	while (s1[i])
	{
		mem[i] = s1[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
