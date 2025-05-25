/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_squote.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 07:57:27 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 09:58:32 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tstring.h"
#include "tsize.h"
#include "syntax.h"
#include "print.h"

int	syntax_squote(t_syntax_attr *attr, t_string string, t_size *index)
{
	if (skipto(string, index, '\''))
		return (swrite(2, "minishell: syntax error unclosed \'\n", 36, 2));
	attr->token = 1;
	return (0);
}
