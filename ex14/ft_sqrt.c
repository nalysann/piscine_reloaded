/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urb-ilya@yandex.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 12:28:19 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/14 12:28:22 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		root;
	int		i;

	root = 0;
	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
			root = i;
		++i;
	}
	return (root);
}
