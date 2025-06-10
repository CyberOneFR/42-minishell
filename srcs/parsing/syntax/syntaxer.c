/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntaxer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 05:42:55 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 00:39:25 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tstring.h"
#include "syntax.h"
#include <unistd.h>

int	syntaxer(t_string	string)
{
	t_syntax_attr	attr;
	t_size			index;

	index = 0;
	attr = (t_syntax_attr){0, 0, 0};
	while (index < string.size)
	{
		if (syntax_operator(&attr, string, &index))
			return (2);
		++index;
	}
	if (syntax_error(attr))
		return (2);
	return (0);
}

int	syntax_error(t_syntax_attr attr)
{
	if (attr.token <= 0 && attr.last_operator == 1)
		return (write(2, "minishell: syntax error near &&\n", 33));
	if (attr.token <= 0 && attr.last_operator == 2)
		return (write(2, "minishell: syntax error near ||\n", 33));
	if (attr.token <= 0 && attr.last_operator == 3)
		return (write(2, "minishell: syntax error near |\n", 32));
	if (attr.token <= 0 && attr.last_operator == 4)
		return (write(2, "minishell: syntax error near <\n", 32));
	if (attr.token <= 0 && attr.last_operator == 5)
		return (write(2, "minishell: syntax error near <<\n", 33));
	if (attr.token <= 0 && attr.last_operator == 6)
		return (write(2, "minishell: syntax error near >\n", 32));
	if (attr.token <= 0 && attr.last_operator == 7)
		return (write(2, "minishell: syntax error near >>\n", 33));
	if (attr.scope_depth < 0)
		return (write(2, "minishell: syntax error near )\n", 32));
	if (attr.scope_depth > 0)
		return (write(2, "minishell: syntax error near (\n", 32));
	return (0);
}
