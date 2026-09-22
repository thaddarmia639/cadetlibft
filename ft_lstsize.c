
#include "libft.h"

unsigned int    ft_lstsize(t_list *lst)
{
    unsigned int    count;

    count = 0;
    if (!lst)
        return (0);
    while (lst)
    {
        lst = lst->next;
        count++;
    }
    return (count);
}
