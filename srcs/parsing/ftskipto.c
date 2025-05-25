/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftskipto.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 04:23:36 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 07:53:37 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tstring.h"
#include "tsize.h"

int	ftskipto(t_string string, t_size *index, char c)
{
	while (*index < string.size)
	{
		if (string.ptr[*index] == c)
			return (0);
		++*index;
	}
	return (-1);
}
