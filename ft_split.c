#include "libft.h"

static char	**ft_memory_error (char **ptr_str)
{
	unsigned int	i;

	i = 0;
	while (ptr_str[i])
	{
		free(ptr_str[i]);
		ptr_str[i] = NULL;
		i++;
	}
	free(ptr_str);
	ptr_str = NULL;
	return (0);
}

static unsigned int	ft_count_new_str (char const *str, char c)
{
	unsigned int	i;
	unsigned int	newstr;

	i = 0;
	newstr = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			newstr++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (newstr);
}

static unsigned int	ft_len_str (char const *s, unsigned int *pos, char c)
{
	unsigned int	len;

	len = 0;
	while (s[*pos] != '\0' && s[*pos] == c)
		(*pos)++;
	while (s[*pos] != '\0' && s[*pos] != c)
	{
		len++;
		(*pos)++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	lines;
	unsigned int	i;
	unsigned int	pos;
	unsigned int	len;
	char			**ptr_str;

	if (!s)
		return (0);
	i = -1;
	lines = ft_count_new_str (s, c);
	ptr_str = (char **)malloc(sizeof(char *) * (lines + 1));
	if (!ptr_str)
		return (0);
	pos = 0;
	while (++i < lines)
	{
		len = ft_len_str (s, &pos, c);
		ptr_str[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!ptr_str[i])
			return (ft_memory_error(ptr_str));
		ft_strlcpy(ptr_str[i], &s[pos - len], len + 1);
	}
	ptr_str[i] = 0;
	return (ptr_str);
}
