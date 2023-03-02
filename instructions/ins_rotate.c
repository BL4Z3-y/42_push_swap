/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:34:46 by yes-slim          #+#    #+#             */
/*   Updated: 2023/03/02 18:54:06 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **head)
{
	t_list	*tmp;
	t_list	*node;

	node = *head;
	*head = (*head)->next;
	tmp = ft_lstlast(node);
	node->next = NULL;
	tmp->next = node;
}

void	ra(t_list **head_a)
{
	if (!head_a || !(*head_a))
		ft_clear_stack(head_a);
	rotate(head_a);
	ft_printf("ra\n");
}

void	rb(t_list **head_b)
{
	if (!(*head_b) || !head_b)
		ft_clear_stack(head_b);
	rotate(head_b);
	ft_printf("rb\n");
}

void	rr(t_list **head_a, t_list **head_b)
{
	if (!(*head_a) || !(*head_b) || !head_a || !head_b)
		clear_all(head_a, head_b);
	ra(head_a);
	rb(head_b);
	ft_printf("rr\n");
}
