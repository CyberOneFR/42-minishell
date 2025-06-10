/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entry_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 00:13:14 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 00:16:53 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tentry.h"

t_entry	entry_init(int id, t_string key, t_string value)
{
	t_entry	entry;

	entry.id = id;
	entry.key = key;
	entry.value = value;
	return (entry);
}
