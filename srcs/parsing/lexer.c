/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:21:06 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 03:22:48 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tarray.h"
#include "tstring.h"

t_array	lexer(t_string string)
{
	t_array	array;
	t_size	index;

	index = 0;
	array.size = 0;
	array.ptr = 0;
	while (index < string.size)
	{
		++index;
	}
	return (array);
}
