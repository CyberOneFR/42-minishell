/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftlexer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:21:06 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 05:10:35 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tnode.h"
#include "tstring.h"

int	ftlexer(t_string string, t_node node)
{
	t_size		index;
	t_string	sub;

	index = 0;
	while (index < string.size)
	{
		sub = ftstring(&string.ptr[index], string.size - index);
		if (operator(sub))
			return (-1);
		if (token(sub))
			return (-1);
		++index;
	}
	return (0);
}

int	operator(t_string string)
{
	return (0);
}

int	token(t_string string)
{
	return (0);
}
