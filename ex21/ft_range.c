/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucas- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:50:32 by alucas-           #+#    #+#             */
/*   Updated: 2017/11/06 13:50:38 by alucas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int *rptr;

	if (min >= max)
		return (NULL);
	range = malloc((max - min) * sizeof(int));
	if (!range)
		return (NULL);
	rptr = range;
	while (min < max)
		*rptr++ = min++;
	return (range);
}
