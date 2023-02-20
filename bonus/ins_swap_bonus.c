/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ins_swap_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:27:12 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/20 15:45:54 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_b(t_list *head)
{
	int		i;
	t_list	*node;
	int		tmp;

	i = ft_lstsize(head);
	if (i <= 1)
		return ;
	tmp = head->content;
	node = head->next;
	head->content = node->content;
	node->content = tmp;
}

void	sa_bonus(t_list *head_a)
{
	if (!head_a)
		return ;
	swap_b(head_a);
}

void	sb_bonus(t_list *head_b)
{
	if (!head_b)
		return ;
	swap_b(head_b);
}

void	ss_bonus(t_list *head_a, t_list *head_b)
{
	if (!head_a || !head_b)
		return ;
	sa(head_a);
	sb(head_b);
}
