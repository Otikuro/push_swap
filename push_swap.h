/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:29:25 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/29 13:48:31 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

void	ft_add_stack_back(t_stack **stack, t_stack *new);
t_stack	*ft_get_last_node(t_stack *stack);
int		ft_get_list(char *str);
t_stack	*ft_new_stack(int content);

#endif
