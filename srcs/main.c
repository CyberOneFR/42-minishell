/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:00:29 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 12:45:11 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include "readline/readline.h"
#include "readline/history.h"
#include "lexer.h"
#include "syntax.h"
#include <unistd.h>

int	main(void)
{
	t_string	string;
	char		*str;

	write(1, TITLE, 25);
	while (1)
	{
		str = readline("minishell: ");
		string = ftstring(str, ftstrlen(str));
		if (syntaxer(string) == 0)
			lexer(string);
	}
	return (0);
}
