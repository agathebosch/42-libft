/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agbosch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:30:49 by agbosch           #+#    #+#             */
/*   Updated: 2021/04/23 23:54:33 by agbosch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	if (lst)
	{
		ptr = *lst;
		while (*lst)
		{
			ptr = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = ptr;
		}
	}
}
