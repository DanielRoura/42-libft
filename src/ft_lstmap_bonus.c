/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:47:42 by droura-s          #+#    #+#             */
/*   Updated: 2024/09/19 12:00:33 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst_start;
	t_list	*new_lst;
	void	*new_content;

	if (!lst || !f || !del)
		return (0);
	new_lst_start = 0;
	while (lst)
	{
		new_content = f(lst->content);
		new_lst = ft_lstnew(new_content);
		if (!new_lst)
		{
			del(new_content);
			ft_lstclear(&new_lst_start, *del);
			return (0);
		}
		ft_lstadd_back(&new_lst_start, new_lst);
		lst = lst->next;
	}
	return (new_lst_start);
}
