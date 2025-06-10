/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:00:29 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 02:02:50 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include "readline/readline.h"
#include "readline/history.h"
#include "syntax.h"
#include <unistd.h>
#include "env.h"

int	main(int ac, char **av, char **ev)
{
	t_string	string;
	char		*str;

	write(1, TITLE, 15);
	(void)ac;
	(void)av;
	(void)ev;
	env_init(ev);
	while (1)
	{
		str = readline("minishell: ");
		string = string_init(str, string_len(str));
		if (syntaxer(string) == 0)
			printf("ok\n");
	}
	return (0);
}
