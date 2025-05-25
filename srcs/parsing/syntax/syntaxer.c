/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntaxer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 05:42:55 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 06:00:15 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tstring.h"

int	syntaxer(t_string	string)
{
	t_size	index;

	index = 0;
	while (index < string.size)
	{
		if (syntax_action(string, &index))
			return (2);
		++index;
	}
	if (syntax_error())
		return (2);
	return (0);
}
