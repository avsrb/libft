#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	idst;
	size_t	dstsrc;

	i = 0;
	dstsrc = ft_strlen(dst) + ft_strlen(src);
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	idst = ft_strlen(dst);
	while ((idst < dstsize - 1) && *(src + i))
	{
		*(dst + idst) = *(src + i);
		i++;
		idst++;
	}
	*(dst + idst) = '\0';
	return (dstsrc);
}
