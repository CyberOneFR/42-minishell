/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smalloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 05:31:08 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 00:43:26 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tsize.h"
#include <stdlib.h>
#include <unistd.h>

int	smalloc(void **ptr, t_size size)
{
	*ptr = malloc(size);
	if (!*ptr)
		return (write(2, "Error malloc()\n", 16));
	return (0);
}
