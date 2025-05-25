/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_or.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 07:49:30 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 07:50:17 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syntax.h"
#include "tsize.h"
#include "print.h"

int	syntax_or(t_syntax_attr *attr, t_size *index)
{
	if (attr->token == 0)
		return (swrite(2, ftstring("minishell: syntax error ||\n", 28), 2));
	*attr = (t_syntax_attr){attr->scope_depth, 2, 0};
	++*index;
	return (0);
}
