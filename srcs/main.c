/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:00:29 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/09 18:02:29 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include "readline/readline.h"
#include "readline/history.h"
#include "lexer.h"
#include "syntax.h"
#include <unistd.h>

int	main(int ac, char **av, char **env)
{
	t_string	string;
	char		*str;

	write(1, TITLE, 15);
	(void)ac;
	(void)av;
	init_env(env);
	while (1)
	{
		str = readline("minishell: ");
		string = string_init(str, string_len(str));
		if (syntaxer(string) == 0)
			lexer(string);
	}
	return (0);
}
