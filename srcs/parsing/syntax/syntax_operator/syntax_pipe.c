/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_pipe.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 07:49:30 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 00:40:40 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syntax.h"
#include "tsize.h"
#include <unistd.h>

int	syntax_pipe(t_syntax_attr *attr)
{
	if (attr->token == 0)
		return (write(2, "minishell: syntax error near |\n", 32));
	attr->last_operator = 3;
	attr->token = 0;
	return (0);
}
