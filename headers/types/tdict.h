/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tdict.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:50:07 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/09 18:04:42 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TDICT_H
# define TDICT_H

# include "tsize.h"
# include "tstring.h"
# include "tentry.h"

typedef struct s_dict
{
	t_size	size;
	t_entry	*first;
	t_entry	*last;
}	t_dict;

#endif