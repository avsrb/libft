#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*p1;
	const unsigned char		*p2;

	p1 = (unsigned char *)dst;
	p2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*(p1 + i) = *(p2 + i);
		if (*(p2 + i) == (unsigned char)c)
			return (&p1[i] + 1);
		i++;
	}
	return (0);
}
