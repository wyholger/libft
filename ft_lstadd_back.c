#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_title;

	last_title = ft_lstlast(*lst);
	last_title->next = new;
	new->next = NULL;
}
