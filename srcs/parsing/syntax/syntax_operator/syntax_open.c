/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_open.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 08:03:49 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 09:33:28 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syntax.h"
#include "print.h"

int	syntax_open(t_syntax_attr *attr)
{
	if (attr->token == 1)
		return (swrite(2, "minishell: syntax error near (\n", 32, 2));
	attr->token = 0;
	++attr->scope_depth;
	return (0);
}
