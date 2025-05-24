/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtostring.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:10:07 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/24 21:15:41 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tstring.h"

t_string	strtostring(char *str)
{
	t_string	string;

	string.ptr = str;
	string.size = strlen(str);
	return (string);
}
