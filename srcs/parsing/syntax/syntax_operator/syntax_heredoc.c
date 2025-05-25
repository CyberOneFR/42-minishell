/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_heredoc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 09:02:00 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 09:26:23 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syntax.h"
#include "tsize.h"

int	syntax_heredoc(t_syntax_attr *attr, t_size *index)
{
	if (attr->token == -1)
		return (swrite(2, "minishell: syntax error <<\n", 28, 2));
	attr->last_operator = 5;
	attr->token = -1;
	++*index;
	return (0);
}
