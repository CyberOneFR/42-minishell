/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_operator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 07:20:11 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 09:01:37 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include "tsize.h"
#include "syntax.h"

int	syntax_operator(t_syntax_attr *attr, t_string string, t_size *index)
{
	if (string.ptr[*index] == '\"')
		return (syntax_dquote(attr, string, index));
	else if (string.ptr[*index] == '\'')
		return (syntax_squote(attr, string, index));
	else if (string.ptr[*index] == '(')
		return (syntax_open(attr));
	else if (string.ptr[*index] == ')')
		return (syntax_close(attr));
	else if (string.ptr[*index] == '&' && string.ptr[*index + 1] == '&')
		return (syntax_and(attr, index));
	else if (string.ptr[*index] == '|' && string.ptr[*index + 1] == '|')
		return (syntax_or(attr, index));
	else if (string.ptr[*index] == '|')
		return (syntax_pipe(attr));
	else if (string.ptr[*index] == '<' && string.ptr[*index + 1] == '<')
		return (syntax_heredoc(attr, index));
	else if (string.ptr[*index] == '<')
		return (syntax_in(attr));
	else if (string.ptr[*index] == '>' && string.ptr[*index + 1] == '>')
		return (syntax_append(attr, index));
	else if (string.ptr[*index] == '>')
		return (syntax_out(attr));
	else if (!(string.ptr[*index] == '\t' || string.ptr[*index] == ' '))
		attr->token = 1;
	return (0);
}
