/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_close.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 08:03:49 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 00:39:53 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syntax.h"
#include <unistd.h>

int	syntax_close(t_syntax_attr *attr)
{
	if (attr->token <= 0)
		return (write(2, "minishell: syntax error near )\n", 32));
	attr->token = 1;
	--attr->scope_depth;
	return (0);
}
