/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_action.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 07:20:11 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 07:22:11 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include "tsize.h"

int	syntax_action(t_string string, t_size *index)
{
	if (string.ptr[0] == '\"')
		syntax_quote();
	return (0);
}
