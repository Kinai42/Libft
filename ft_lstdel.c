
#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst)
		ft_lstdel(&(*alst->next), del);
	ft_lstdelone(**alst, del((*alst)->content, (*alst)->content_size));
}
