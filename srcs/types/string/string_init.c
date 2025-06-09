/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:02:59 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/09 18:03:06 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tsize.h"
#include "tstring.h"

t_string	string_init(char *str, t_size size)
{
	t_string	string;

	string.ptr = str;
	string.size = size;
	return (string);
}
