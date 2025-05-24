/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tarray.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:01:37 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/24 21:10:51 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARRAY_H
# define TARRAY_H

# include "tsize.h"

typedef struct s_array
{
	t_size	size;
	void	*ptr;
}	t_array;

#endif