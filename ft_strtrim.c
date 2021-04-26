#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy;
	size_t	s;
	size_t	f;
	size_t	i;

	if (!s1)
		return (0);
	s = 0;
	i = 0;
	f = ft_strlen(s1);
	while (ft_strchr (set, s1[s]) && s1[s])
		s++;
	while (ft_strchr (set, s1[f - 1]) && f > s)
		f--;
	copy = (char *)malloc(sizeof(char) * (f - s + 1));
	if (!copy)
		return (0);
	while (f > s)
		copy[i++] = s1[s++];
	copy[i] = '\0';
	return (copy);
}
