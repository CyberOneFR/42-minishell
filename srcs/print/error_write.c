/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_write.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 07:04:36 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 07:07:00 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tstring.h"
#include <unistd.h>

int	error_write(int fd, t_string string, int ret)
{
	write(2, string.ptr, string.size);
	return (ret);
}
