/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 05:50:10 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 09:29:40 by ethebaul         ###   ########.fr       */
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
int	syntax_error(t_syntax_attr attr);
int	syntax_operator(t_syntax_attr *attr, t_string string, t_size *index);
int	syntax_and(t_syntax_attr *attr, t_size *index);
int	syntax_or(t_syntax_attr *attr, t_size *index);
int	syntax_pipe(t_syntax_attr *attr);
int	syntax_open(t_syntax_attr *attr);
int	syntax_close(t_syntax_attr *attr);
int	syntax_squote(t_syntax_attr *attr, t_string string, t_size *index);
int	syntax_dquote(t_syntax_attr *attr, t_string string, t_size *index);
int	syntax_in(t_syntax_attr *attr);
int	syntax_heredoc(t_syntax_attr *attr, t_size *index);
int	syntax_out(t_syntax_attr *attr);
int	syntax_append(t_syntax_attr *attr, t_size *index);

#endif