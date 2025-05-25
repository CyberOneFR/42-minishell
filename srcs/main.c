/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:00:29 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 08:27:33 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readline/readline.h"
#include "readline/history.h"
#include "lexer.h"
#include "syntax.h"
#include <unistd.h>

int	main(void)
{
	char	*str;

	write(1, "\033]0;minishell ;) \007", 19);
	while (1)
	{
		str = readline("minishell:");
		syntaxer(ftstring(str, ftstrlen(str)));
	}
	return (0);
}
