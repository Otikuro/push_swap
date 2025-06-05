/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:29:25 by juamanri          #+#    #+#             */
/*   Updated: 2025/06/05 12:32:09 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"

typedef struct s_stack
{
	int				index;
	int				value;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

// MOVES
void	ft_rotate(t_stack **stack, char c);

// STACK
void	ft_add_stack_back(t_stack **stack, t_stack *new);
t_stack	*ft_get_first_node(t_stack *stack);
t_stack	*ft_get_last_node(t_stack *stack);
int		ft_get_stack(int argc, char *argv[]);
t_stack	*ft_new_stack(int content);

// SORT
void	ft_inverse_sort(t_stack **stack, int size);
void	ft_select_algorithm(t_stack **stack, int size, int validity);
void	ft_sort_three_elements(t_stack *stack);

#endif
