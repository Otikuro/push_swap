/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_stack_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 09:05:24 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/29 09:05:43 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_add_stack_back(t_stack **stack, t_stack *new)
{
	t_stack	*last_node;

	if (new == NULL)
		return ;
	if (*stack == NULL)
		*stack = new;
	else
	{
		last_node = ft_get_last_node(*stack);
		last_node->next = new;
	}
}