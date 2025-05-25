/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swrite.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 07:04:36 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 07:15:02 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tstring.h"
#include <unistd.h>

int	swrite(int fd, t_string string, int ret)
{
	if (write(fd, string.ptr, string.size) == -1)
		write(2, "write error\n", 13);
	return (ret);
}
