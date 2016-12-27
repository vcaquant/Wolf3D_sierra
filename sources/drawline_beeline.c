/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawline_beeline.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbetz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 11:59:10 by bbetz             #+#    #+#             */
/*   Updated: 2016/05/23 19:53:20 by bbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Wolf.h"

void	dx_null_a(t_drawline *draw, t_env *env)
{
	while (draw->y1++ < draw->y2)
		ft_color(env, (int)draw->x1, (int)draw->y1);
}

void	dx_null_b(t_drawline *draw, t_env *env)
{
	while (draw->y1-- > draw->y2)
		ft_color(env, (int)draw->x1, (int)draw->y1);
}

void	dy_null_a(t_drawline *draw, t_env *env)
{
	while (draw->x1++ < draw->x2)
		ft_color(env, (int)draw->x1, (int)draw->y1);
}

void	dy_null_b(t_drawline *draw, t_env *env)
{
	while (draw->x1-- > draw->x2)
		ft_color(env, (int)draw->x1, (int)draw->y1);
}
