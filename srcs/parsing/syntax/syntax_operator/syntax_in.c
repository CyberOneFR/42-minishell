/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_in.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 09:02:29 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 00:40:16 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syntax.h"
#include <unistd.h>

int	syntax_in(t_syntax_attr *attr)
{
	if (attr->token == -1)
		return (write(2, "minishell: syntax error near <\n", 32));
	attr->last_operator = 4;
	attr->token = -1;
	return (0);
}
