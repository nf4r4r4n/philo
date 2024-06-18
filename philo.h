/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfararan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:13:16 by nfararan          #+#    #+#             */
/*   Updated: 2024/06/18 15:39:11 by nfararan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H
# include <stdio.h>

# ifndef PH_USAGE
#  define PH_USAGE "\e[1;34mUsage:\e[0m	./philo (1) (2) (3) (4) (5) \n\
\e[1;34mArguments:\e[0m \n\
	(1): Number of philosophers \n\
	(2): Time_to_die \n\
	(3): Time to_eat \n\
	(4): Time to sleep \n\
	(5): Number of times each philosopher must_eat (optional)\n"
# endif

typedef struct s_args
{
	unsigned int	nb_philo;
	unsigned int	die_time;
	unsigned int	eat_time;
	unsigned int	sleep_time;
	unsigned int	nb_times_eat;
}	t_args;

int				ph_isdigit(const char *nbr);
int				ph_check_args(int argc, char **argv);
unsigned int	ph_atoi(const char *nbr);
void			ph_init_args(t_args *args, int argc, char **argv);
void			ph_print_args(t_args args);

#endif
