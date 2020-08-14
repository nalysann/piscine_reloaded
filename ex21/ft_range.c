/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urb-ilya@yandex.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 12:29:29 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/14 12:29:31 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	if (!(arr = malloc(sizeof(*arr) * (max - min))))
		return (NULL);
	i = min;
	while (i < max)
	{
		arr[i - min] = i;
		++i;
	}
	return (arr);
}
