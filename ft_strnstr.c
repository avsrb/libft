#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i1;
	size_t	i2;

	i1 = 0;
	i2 = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i1 < len && haystack[i1])
	{
		i2 = 0;
		while (haystack[i1 + i2] == needle[i2] && (i1 + i2) < len)
		{
			i2++;
			if (needle[i2] == '\0')
				return ((char *)haystack + i1);
		}
		i1++;
	}
	return (0);
}
