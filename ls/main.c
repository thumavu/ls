/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thumavu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/19 16:02:45 by thumavu           #+#    #+#             */
/*   Updated: 2016/06/19 16:27:56 by thumavu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int			main(int argc, char **argv)
{
	t_ls_args		*ls_args;

	if (!(ls_args = (t_ls_args *)ft_memalloc(sizeof(t_ls_args))))
		return (0);
	ls_args->authorized_options = ft_strdup("Ralrt");
	check_arguments(argc, argv, ls_args);
	ls_args->dirs = sort_from_options(ls_args->dirs, ls_args->options, 1);
	browse_directories(ls_args);
	free_main_struct(ls_args);
	return (0);
}
