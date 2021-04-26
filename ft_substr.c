#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*mem;

	i = 0;
	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s) < (start + len))
		mem = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		mem = (char *)malloc(sizeof(char) * (len + 1));
	if (!mem)
		return (0);
	while (i < len && s[start])
		mem[i++] = s[start++];
	mem[i] = '\0';
	return (mem);
}
