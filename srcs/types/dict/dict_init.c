/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 02:05:50 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 02:07:27 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tdict.h"

t_dict	dict_init(void)
{
	t_dict	dict;

	dict.size = 0;
	dict.first = 0;
	dict.last = 0;
	return (dict);
}
