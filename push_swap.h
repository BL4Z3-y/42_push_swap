/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:16:27 by yes-slim          #+#    #+#             */
/*   Updated: 2023/02/15 18:59:34 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

//FT_PRINTF
# include <limits.h>
# include <unistd.h>
# include <stdarg.h>
int		ft_printf(const char *str, ...);
void	ft_print_char(char c, int *len);
void	ft_print_str(char *str, int *len);
void	ft_print_nbr(int i, int *len);
void	ft_print_adr(unsigned long l, int *len);
/*------------------------------------*/
//LIBFT
typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

int		ft_isdigit(int i);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
char	*ft_join(char *s1, char *s2);
void	ft_free(char **arr, int i);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst);
/*------------------------------------*/
//HELPERS
void	ft_error(void);
void	check_args(char *av);
void	check_double(t_list *head);
t_list	*ft_fill(char **av, int ac);
int		*sort_arr(t_list **stack_a);
/*------------------------------------*/
//INSTRUCTIONS
void	pa(t_list **head_a, t_list **head_b);
void	pb(t_list **head_b, t_list **head_a);
void	sa(t_list *head_a);
void	sb(t_list *head_b);
void	ss(t_list *head_a, t_list *head_b);
void	ra(t_list **head_a);
void	rb(t_list **head_b);
void	rr(t_list **head_a, t_list **head_b);
void	rra(t_list **head_a);
void	rrb(t_list **head_b);
void	rrr(t_list **head_a, t_list **head_b);
/*------------------------------------*/
#endif