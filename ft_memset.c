#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{	
	size_t			i;
	unsigned char	*dst;

	i = 0;
	dst = b;
	while (i < len)
	{
		dst[i] = c;
		i++;
	}
	return (dst);
}
