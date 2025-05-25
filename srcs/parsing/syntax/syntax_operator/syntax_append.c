/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 09:02:00 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 09:40:25 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syntax.h"
#include "tsize.h"
#include "print.h"

int	syntax_append(t_syntax_attr *attr, t_size *index)
{
	if (attr->token == -1)
		return (swrite(2, "minishell: syntax error near >>\n", 33, 2));
	attr->last_operator = 7;
	attr->token = -1;
	++*index;
	return (0);
}
