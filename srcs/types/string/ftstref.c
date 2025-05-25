/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstref.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 04:28:41 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 04:30:53 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tstring.h"
#include "tsize.h"

t_string	ftsubstr(char *ptr, t_size size)
{
	t_string	string;

	string.size = size;
	string.ptr = ptr;
	return (string);
}
