/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:29:25 by juamanri          #+#    #+#             */
/*   Updated: 2025/06/03 12:28:21 by juamanri         ###   ########.fr       */
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

void	ft_add_stack_back(t_stack **stack, t_stack *new);
t_stack	*ft_get_last_node(t_stack *stack);
int		ft_get_list(int argc, char *argv[]);
t_stack	*ft_new_stack(int content);

#endif
