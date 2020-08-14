/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urb-ilya@yandex.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 12:29:18 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/14 12:29:21 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

char	*ft_strcpy(char *dst, char *src)
{
	while (*src)
		*dst++ = *src++;
	*dst = *src;
	return (dst);
}

char	*ft_strdup(char *src)
{
	char *str;

	if (!(str = malloc(ft_strlen(src) + 1)))
		return (NULL);
	ft_strcpy(str, src);
	return (str);
}
