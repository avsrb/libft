#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!src)
		return (0);
	if (dstsize > 0)
	{
		while (*(src + i) && (i < dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		*(dst + i) = '\0';
		return (ft_strlen(src));
	}
	return (ft_strlen(src));
}
