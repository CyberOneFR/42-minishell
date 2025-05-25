/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tnode.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 04:48:37 by ethebaul          #+#    #+#             */
/*   Updated: 2025/05/25 04:52:02 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TNODE_H
# define TNODE_H

# include "tarray.h"

typedef struct s_node
{
	struct s_node	*parent;
	t_array			childs;
}	t_node;

#endif