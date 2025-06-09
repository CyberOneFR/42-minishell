/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tentry.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:03:50 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/09 18:04:22 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TENTRY_H
# define TENTRY_H

# include "tsize.h"
# include "tstring.h"

typedef struct s_entry
{
	t_size		id;
	t_string	key;
	t_string	value;
}	t_entry;

#endif