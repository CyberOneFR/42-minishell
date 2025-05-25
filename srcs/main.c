/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:00:29 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 04:12:29 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readline/readline.h"
#include "lexer.h"
#include <unistd.h>

int	main(void)
{
	char	*str;

	write(1, "\033]0;minishell ;) \007", 19);
	while (1)
	{
		str = readline("minishell:");
		lexer(ftstring(str));
	}
	return (0);
}
