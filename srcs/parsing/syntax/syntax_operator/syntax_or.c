/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_or.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 07:49:30 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 00:40:29 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syntax.h"
#include "tsize.h"
#include <unistd.h>

int	syntax_or(t_syntax_attr *attr, t_size *index)
{
	if (attr->token <= 0)
		return (write(2, "minishell: syntax error near ||\n", 33));
	attr->last_operator = 2;
	attr->token = 0;
	++*index;
	return (0);
}
