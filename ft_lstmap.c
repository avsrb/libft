#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;
	t_list	*n_elem;

	if (lst && f)
	{	
		n_elem = ft_lstnew(f(lst->content));
		n_lst = n_elem;
		lst = lst->next;
		while (lst)
		{
			n_elem = ft_lstnew(f(lst->content));
			if (!n_elem)
			{
				ft_lstclear(&n_elem, del);
				return (0);
			}
			lst = lst->next;
			ft_lstadd_back(&n_lst, n_elem);
		}
		return (n_lst);
	}
	return (0);
}
