/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:21:06 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/05 16:40:37 by ethebaul         ###   ########.fr       */
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
		// if (string.ptr[index] == '&' && string.ptr[index + 1] == '&')
		// 	lexer_and();
		// if (string.ptr[index] == '&' && string.ptr[index + 1] == '&')
		++index;
	}
	attr.token.size = &string.ptr[index] - attr.token.ptr;
	return (0);
}
