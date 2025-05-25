/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tstring.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:04:03 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 09:58:05 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TSTRING_H
# define TSTRING_H

# include "tsize.h"

typedef struct s_string
{
	t_size	size;
	char	*ptr;
}	t_string;

t_size		ftstrlen(char *str);
t_string	ftstring(char *str, t_size size);
int			skipto(t_string string, t_size *index, char c);

#endif