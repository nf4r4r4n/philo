/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfararan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:16:22 by nfararan          #+#    #+#             */
/*   Updated: 2024/06/18 17:19:52 by nfararan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ph_isdigit(const char *nbr)
{
	int	i;

	i = 0;
	if (nbr[i] == '+')
		i++;
	while (nbr[i])
	{
		if (!('0' <= nbr[i] && nbr[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	ph_check_args(int argc, char **argv)
{
	int	i;

	if (argc < 5)
		return (printf(PH_USAGE), 0);
	i = 1;
	while (i < argc)
	{
		if (!ph_isdigit(argv[i]))
			return (printf("Arguments must be positive integers\n"), 0);
		i++;
	}
	return (1);
}

unsigned int	ph_atoi(const char *nbr)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	if (nbr[i] == '+')
		i++;
	while (nbr[i])
	{
		result = result * 10 + (nbr[i] - '0');
		i++;
	}
	return (result);
}

int	ph_init_args(t_args *args, int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 5)
		args->nb_times_eat = 0;
	while (i < argc)
	{
		if (i < 6 && ph_atoi(argv[i]) == 0)
			return (printf("Some of arguments has 0 value\n"), 0);
		if (i == 1)
			args->nb_philo = ph_atoi(argv[i]);
		else if (i == 2)
			args->die_time = ph_atoi(argv[i]);
		else if (i == 3)
			args->eat_time = ph_atoi(argv[i]);
		else if (i == 4)
			args->sleep_time = ph_atoi(argv[i]);
		else if (i == 5)
			args->nb_times_eat = ph_atoi(argv[i]);
		i++;
	}
	return (1);
}

void	ph_print_args(t_args args)
{
	printf("Number of philosophers: %u\n", args.nb_philo);
	printf("Time to die: %u ms\n", args.die_time);
	printf("Time to eat: %u ms\n", args.eat_time);
	printf("Time to sleep: %u ms\n", args.sleep_time);
	printf("Number of times each philosopher must eat: %u\n",
		args.nb_times_eat);
}
