/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:10:07 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 03:24:45 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tstring.h"

t_string	ftstring(char *str)
{
	t_string	string;

	string.ptr = str;
	string.size = ftstrlen(str);
	return (string);
}
