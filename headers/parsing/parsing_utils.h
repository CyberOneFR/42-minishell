/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 00:33:07 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 00:33:45 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_UTILS_H
# define PARSING_UTILS_H

# include "tstring.h"
# include "tsize.h"

int	skipto(t_string string, t_size *index, char c);

#endif