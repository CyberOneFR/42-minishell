/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstringdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 05:24:41 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 05:30:49 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tsize.h"
#include "tstring.h"

t_string	ftstringdup(t_string string)
{
	t_string	new;
	t_size		index;

	new.size = string.size + 1;
	new.ptr = malloc(new.size * sizeof(char));
	index = 0;
	while (index < string.size)
	{
		new.ptr[index] = string.ptr[index];
		++index;
	}
	new.ptr[index] = '\0';
	return (new);
}
