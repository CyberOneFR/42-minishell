/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skipto.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 04:23:36 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 04:34:44 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tstring.h"
#include "tsize.h"

t_size	ftskipto(t_string string, char c)
{
	t_size	index;

	index = 0;
	while (index < string.size)
	{
		if (string.ptr[index] == c)
			break ;
	}
	return (index);
}
