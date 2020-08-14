/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urb-ilya@yandex.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 12:28:12 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/14 13:23:14 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (!(0 <= nb && nb <= 12))
		return (0);
	return (nb > 1 ? nb * ft_recursive_factorial(nb - 1) : 1);
}
