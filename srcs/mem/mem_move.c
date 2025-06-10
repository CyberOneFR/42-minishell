/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 00:26:19 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 00:32:09 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tsize.h"

void	mem_move(void *src, void *dest, t_size size)
{
	while (size >= 8)
	{
		*(unsigned long *)dest = *(unsigned long *)src;
		src += sizeof(unsigned long);
		dest += sizeof(unsigned long);
		size -= 8;
	}
	while (size >= 1)
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		src += sizeof(unsigned char);
		dest += sizeof(unsigned char);
		size -= 1;
	}
}
