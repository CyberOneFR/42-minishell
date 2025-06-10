/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_dup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 00:21:55 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 00:41:19 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tstring.h"
#include <stdlib.h>
#include "mem.h"

t_string	string_dup(t_string string)
{
	t_string	new_string;

	new_string.size = string.size;
	new_string.ptr = malloc((string.size + 1) * sizeof(char));
	mem_move(string.ptr, new_string.ptr, string.size);
	new_string.ptr[string.size] = 0;
	return (new_string);
}
