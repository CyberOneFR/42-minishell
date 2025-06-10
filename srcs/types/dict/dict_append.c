/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_append.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:55:31 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 02:14:42 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tdict.h"
#include <stdlib.h>
#include "alloc.h"

int	dict_append(t_dict *dict, t_entry entry)
{
	t_dict_element	*new_entry;

	if (smalloc((void *)&new_entry, sizeof(t_dict_element)))
		return (1);
	if (dict->last)
	{
		dict->last->next = new_entry;
		dict->last = new_entry;
	}
	else
	{
		dict->first = new_entry;
		dict->last = new_entry;
	}
	new_entry->entry = entry;
	new_entry->next = 0;
	dict->size += 1;
	return (0);
}
