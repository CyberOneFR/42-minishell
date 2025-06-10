/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:43:58 by ethebaul          #+#    #+#             */
/*   Updated: 2025/06/10 02:14:45 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tdict.h"
#include "tentry.h"
#include "parsing_utils.h"
#include <stdio.h>

int	env_init(char **raw_env)
{
	t_dict		env;
	t_string	raw;
	t_string	key;
	t_string	value;

	env = dict_init();
	while (*raw_env)
	{
		raw = string_init(*raw_env, string_len(*raw_env));
		key = string_init(raw.ptr, 0);
		skipto(raw, &key.size, '=');
		value = string_init(raw.ptr + key.size + 1, raw.size - (key.size + 1));
		dict_append(&env, entry_init(env.size, string_dup(key), \
			string_dup(value)));
		printf("%s = %s\n", env.last->entry.key.ptr, env.last->entry.value.ptr);
		++env.size;
		++raw_env;
	}
	return (0);
}
