/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:11:47 by juamanri          #+#    #+#             */
/*   Updated: 2025/06/05 12:37:49 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

#include <stdio.h>

void	ft_rotate(t_stack **stack, char c)
{
	t_stack *first;
	t_stack *second;
	t_stack *last;

	if (!stack || !*stack || !(*stack)->next)
		return;

	first = *stack;
	second = first->next;
	last = ft_get_last_node(first);
		
	// Desconectar el primero
	second->prev = NULL;
	first->next = NULL;
	// Conectar al final
	last->next = first;
	first->prev = last;
	// Actualizar head
	*stack = second;

	printf("r%c\n", c);
}
