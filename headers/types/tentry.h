/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tentry.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:03:50 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 00:19:08 by ethebaul         ###   ########.fr       */
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

t_entry	entry_init(int id, t_string key, t_string value);

#endif