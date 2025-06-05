/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inverse_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 22:29:06 by juamanri          #+#    #+#             */
/*   Updated: 2025/06/05 12:30:13 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

#include <stdio.h>

void	ft_inverse_sort(t_stack **stack, int size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		ft_rotate(stack, 'a');
		i++;
	}
}
