/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juamanri <juamanri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:42:48 by juamanri          #+#    #+#             */
/*   Updated: 2025/05/27 13:57:30 by juamanri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_check_validity()
{
	while (lst)
	{
		if (lst->content >)
		lst = lst->next;
		counter++;
	}
	return;
}

void	ft_get_list(char *str)
{
	char	**nums;
	int		i;

	i = 0;
	nums = ft_split(str, ' ');
	while (nums[i])
	{
		nums[i] = ft_strtrim(nums[i], " ");
		i++;
	}
	//Comprueba que se hayan creado como minimo dos elelmentos
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
	ft_check_validity();
	
}
