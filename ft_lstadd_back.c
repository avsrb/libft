#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l_elem;

	if (lst)
	{
		if (*lst == 0)
			*lst = new;
		else
		{
			l_elem = ft_lstlast(*(lst));
			l_elem->next = new;
		}
	}
}
