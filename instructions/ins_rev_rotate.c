/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_rev_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:34:37 by yes-slim          #+#    #+#             */
/*   Updated: 2023/03/02 18:53:58 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_list **head)
{
	t_list	*node;
	t_list	*tmp;

	node = *head;
	tmp = *head;
	while (tmp->next != ft_lstlast(*head))
		tmp = tmp->next;
	*head = ft_lstlast(*head);
	tmp->next = NULL;
	(*head)->next = node;
}

void	rra(t_list **head_a)
{
	if (!(*head_a) || !head_a)
		ft_clear_stack(head_a);
	rev_rotate(head_a);
	ft_printf("rra\n");
}

void	rrb(t_list **head_b)
{
	if (!(*head_b) || !head_b)
		ft_clear_stack(head_b);
	rev_rotate(head_b);
	ft_printf("rrb\n");
}

void	rrr(t_list **head_a, t_list **head_b)
{
	if (!(*head_a) || !(*head_b) || !head_a || !head_b)
		clear_all(head_a, head_b);
	rra(head_a);
	rrb(head_b);
	ft_printf("rrr\n");
}
