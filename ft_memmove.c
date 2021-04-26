#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (((unsigned const char *)src) < ((unsigned char *)dst))
	{
		while (len > 0)
		{
			*((unsigned char *)dst + len - 1) = \
			*((unsigned const char *)src + len - 1);
			len--;
		}
	}
	if (((unsigned const char *)src) > ((unsigned char *)dst))
	{
		while (i < len)
		{
			*((unsigned char *)dst + i) = *((unsigned const char *)src + i);
			i++;
		}
	}
	return (((unsigned char *)dst));
}
