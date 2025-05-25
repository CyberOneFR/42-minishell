/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swrite.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 07:04:36 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 09:07:35 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tsize.h"
#include <unistd.h>

int	swrite(int fd, char *str, t_size len, int ret)
{
	if (write(fd, str, len) == -1)
		write(2, "write error\n", 13);
	return (ret);
}
