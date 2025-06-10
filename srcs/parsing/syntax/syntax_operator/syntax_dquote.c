/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_dquote.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 07:50:53 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 00:42:17 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tstring.h"
#include "tsize.h"
#include "syntax.h"
#include "parsing_utils.h"
#include <unistd.h>

int	syntax_dquote(t_syntax_attr *attr, t_string string, t_size *index)
{
	if (skipto(string, index, '\"'))
		return (write(2, "minishell: syntax error near \"\n,", 33));
	attr->token = 1;
	return (0);
}
