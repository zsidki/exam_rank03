/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_paint.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsidki <zsidki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 12:28:00 by iidzim            #+#    #+#             */
/*   Updated: 2021/11/25 17:00:52 by zsidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINI_PAINT_H
#define MINI_PAINT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct	s_circle{
	int			w; // first line args
	int			h; // first line args
	char		b; // first line args ,
	char		c; // c : empty circle or C : filled circle
	float		x;
	float		y;
	float		r;
	char		d;
	float		dist;
}				t_circle;

#endif
