/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_and.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 07:43:13 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 00:39:42 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syntax.h"
#include "tsize.h"
#include <unistd.h>

int	syntax_and(t_syntax_attr *attr, t_size *index)
{
	if (attr->token <= 0)
		return (write(2, "minishell: syntax error near &&\n", 33));
	attr->last_operator = 1;
	attr->token = 0;
	++*index;
	return (0);
}
