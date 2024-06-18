/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfararan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:09:54 by nfararan          #+#    #+#             */
/*   Updated: 2024/06/18 15:37:49 by nfararan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	t_args	args;

	if (!ph_check_args(argc, argv))
		return (1);
	ph_init_args(&args, argc, argv);
	ph_print_args(args);
}
