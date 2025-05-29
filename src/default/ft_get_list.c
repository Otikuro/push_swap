/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:42:48 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/29 11:33:00 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"
#include <stdio.h>

t_stack	*ft_create_list(char **nums)
{
	t_stack	*first_node;
	t_stack	*new_node;
	int		i;

	i = 0;
	while (nums[i])
	{
		new_node = ft_new_stack(nums[i]);
		ft_add_stack_back(&first_node, new_node);
	}
	return (first_node);
}

int	ft_get_list(char *str)
{
	t_stack	*node;
	char	**nums;

	nums = ft_split(str, ' ');
	if (nums == NULL)
		return (0);
	// node = ft_create_list(nums);
	// while (node)
	// {
	// 	printf("%s", node->value);
	// 	node = node->next;
	// }
	return (1);
/* 	//Comprueba que se hayan creado como minimo dos elelmentos
	if (i < 2)
	{
		write("Error");
		return ();
	}
	//Crea la primera lista con el numero de elementos contados por i, asignando el valor devuelto por atoi como el contenido
	while ()
	{
		ft_lstnew();
	}
	ft_check_validity(); */
	
}
