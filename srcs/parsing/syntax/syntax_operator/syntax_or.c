/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_or.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 07:49:30 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 09:33:23 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syntax.h"
#include "tsize.h"
#include "print.h"

int	syntax_or(t_syntax_attr *attr, t_size *index)
{
	if (attr->token <= 0)
		return (swrite(2, "minishell: syntax error near ||\n", 33, 2));
	attr->last_operator = 2;
	attr->token = 0;
	++*index;
	return (0);
}
