/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 00:51:17 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 21:44:58 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEXER_H
# define LEXER_H

# include "tstring.h"

typedef struct s_lexer_attr
{
	int			scope_depth;
	int			exit_code;
	t_string	token;
	int			last_operator;
}	t_lexer_attr;

int	lexer(t_string string);

#endif