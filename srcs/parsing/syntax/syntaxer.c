/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntaxer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 05:42:55 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 07:04:10 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tstring.h"
#include "syntax.h"

int	syntaxer(t_string	string)
{
	t_syntax_attr	attr;
	t_size			index;

	index = 0;
	attr.last_operator = -1;
	attr.scope_depth = 0;
	attr.token = 0;
	while (index < string.size)
	{
		if (syntax_action(string, &index))
			return (2);
		++index;
	}
	if (syntax_error(attr))
		return (2);
	return (0);
}

int	syntax_error(t_syntax_attr attr)
{
	if (attr.token == 0 && attr.last_operator == 0)
	{
		write(2, "minishell: syntax error near unexpected token &&\n", 50);
		return (2);
	}
	if (attr.token == 0 && attr.last_operator == 1)
	{
		write(2, "minishell: syntax error near unexpected token ||\n", 50);
		return (2);
	}
	
}
