/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:21:06 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 21:49:33 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tnode.h"
#include "tstring.h"
#include "alloc.h"
#include "lexer.h"
#include <unistd.h>

int	lexer(t_string string)
{
	t_size			index;
	t_lexer_attr	attr;

	index = 0;
	attr.token.ptr = string.ptr;
	while (index < string.size)
	{
		if (string.ptr[index] == '\"')
			skipto(string, &index, '\"');
		if (string.ptr[index] == '\'')
			skipto(string, &index, '\'');
		if (string.ptr[index] == '(')
			skipto(string, &index, ')');
		if (string.ptr[index] == '&' && string.ptr[index + 1] == '&')
		{
			attr.token.size = &string.ptr[index] - attr.token.ptr;
			write(1, attr.token.ptr, attr.token.size);
			write(1, "\n", 1);
			++index;
			attr.token.ptr = &string.ptr[index + 1];
		}
		++index;
	}
	attr.token.size = &string.ptr[index] - attr.token.ptr;
	write(1, attr.token.ptr, attr.token.size);
	write(1, "\n", 1);
	return (0);
}
