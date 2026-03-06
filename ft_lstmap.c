/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busyigit <busyigit@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 02:31:44 by busyigit          #+#    #+#             */
/*   Updated: 2026/03/06 23:56:58 by busyigit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
/*#include <stdio.h>
#include <fcntl.h>

void *upper(void *content)
{
    char *s = (char *)content;
    char *new = ft_strdup(s); 
    int i = 0;
    while (new[i])
    {
        if (new[i] >= 97 && new[i] <= 122)
            new[i] -= 32; 
        i++;
    }
    return (new);
}

int main()
{
    t_list *a = ft_lstnew(ft_strdup("buse"));
    t_list *b = ft_lstnew(ft_strdup("yigit"));
    t_list *c = ft_lstnew(ft_strdup("42"));

    a->next = b;
    b->next = c;
    a->next = c;

    ft_lstdelone(b, free);

    t_list *up = ft_lstmap(a, upper, free);

    int fd = open("textdelete.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    t_list *ptr = up;
    while (ptr)
    {
        ft_putendl_fd((char *)ptr->content, fd);
        ptr = ptr->next;
    }
    close(fd);

    ft_lstclear(&a, free);
    ft_lstclear(&up, free); 
}*/