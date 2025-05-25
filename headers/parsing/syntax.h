/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 05:50:10 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 06:03:11 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SYNTAX_H
# define SYNTAX_H

# include "tstring.h"

typedef struct s_syntax_attr
{
	int		scope_depth;
	int		last_operator;
	int		token;
}	t_syntax_attr;

int	syntaxer(t_string string);

#endif