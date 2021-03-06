/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoosen <mhoosen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 16:09:46 by mhoosen           #+#    #+#             */
/*   Updated: 2018/07/26 13:51:33 by mhoosen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

void	vec_free(t_vec *v)
{
	if (!v)
		return ;
	v->type_size = 0;
	v->length = 0;
	free(v->data);
	v->mem_size = 0;
}
