/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_out.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 09:02:33 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 09:14:29 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "syntax.h"

int	syntax_out(t_syntax_attr *attr)
{
	if (attr->token == -1)
		return (swrite(2, "minishell: syntax error >\n", 27, 2));
	attr->token = -1;
	attr->last_operator = 6;
	return (0);
}
