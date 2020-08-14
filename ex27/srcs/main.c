/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urb-ilya@yandex.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 12:31:22 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/14 12:31:23 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#include <unistd.h>

int		main(int argc, char *argv[])
{
	if (argc < 2)
		ft_putstr_fd(STDERR_FILENO, "File name missing.\n");
	else if (argc > 2)
		ft_putstr_fd(STDERR_FILENO, "Too many arguments.\n");
	else
		ft_display_file(argv[1]);
	return (0);
}
