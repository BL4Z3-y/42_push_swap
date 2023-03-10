/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_rev_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:34:37 by yes-slim          #+#    #+#             */
/*   Updated: 2023/03/02 18:53:44 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_b(t_list **head)
{
	t_list	*node;
	t_list	*tmp;

	node = *head;
	tmp = *head;
	while (tmp->next != ft_lstlast(*head))
	{
		tmp = tmp->next;
	}
	*head = ft_lstlast(*head);
	tmp->next = NULL;
	(*head)->next = node;
}

void	rra_bonus(t_list **head_a)
{
	if (!(*head_a) || !head_a)
		return ;
	rev_rotate_b(head_a);
}

void	rrb_bonus(t_list **head_b)
{
	if (!(*head_b) || !head_b)
		return ;
	rev_rotate_b(head_b);
}

void	rrr_bonus(t_list **head_a, t_list **head_b)
{
	if (!(*head_a) || !(*head_b) || !head_a || !head_b)
		return ;
	rra(head_a);
	rrb(head_b);
}
