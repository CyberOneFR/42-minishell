/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_out.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 09:02:33 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 00:40:34 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syntax.h"
#include <unistd.h>

int	syntax_out(t_syntax_attr *attr)
{
	if (attr->token == -1)
		return (write(2, "minishell: syntax error near >\n", 32));
	attr->token = -1;
	attr->last_operator = 6;
	return (0);
}
