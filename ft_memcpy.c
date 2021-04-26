#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p1;
	const unsigned char	*p2;

	p1 = dst;
	p2 = src;
	i = 0;
	if (p1 == 0 && p2 == 0)
		return (0);
	while (i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	return (dst);
}
