/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urb-ilya@yandex.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 12:28:01 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/14 12:28:03 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	factorial;

	if (!(0 <= nb && nb <= 12))
		return (0);
	factorial = 1;
	while (nb > 1)
		factorial *= nb--;
	return (factorial);
}
