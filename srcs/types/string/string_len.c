/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:06:31 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/09 18:03:16 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tsize.h"

t_size	string_len(char *str)
{
	t_size	len;

	len = 0;
	while (str[len])
	{
		++len;
	}
	return (len);
}
