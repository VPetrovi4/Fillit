/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_314.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagulov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 19:50:52 by eagulov           #+#    #+#             */
/*   Updated: 2018/12/19 20:50:17 by eagulov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	my_314area(float radius)
{
	float	area;

	area = 3.14 * (radius * radius);
	return (area);
}
