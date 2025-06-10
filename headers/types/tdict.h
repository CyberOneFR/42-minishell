/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tdict.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:50:07 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 02:07:41 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TDICT_H
# define TDICT_H

# include "tsize.h"
# include "tstring.h"
# include "tentry.h"

typedef struct s_dict_element
{
	struct s_dict_element	*next;
	t_entry					entry;
}	t_dict_element;

typedef struct s_dict
{
	t_size			size;
	t_dict_element	*first;
	t_dict_element	*last;
}	t_dict;

t_dict	dict_init(void);
int		dict_append(t_dict *dict, t_entry entry);

#endif