/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nammari <nammari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:39:40 by nammari           #+#    #+#             */
/*   Updated: 2021/12/12 15:54:09 by nammari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	get_nb_of_philosophers(char *argv, t_simulation_data *data)
{
	if (!is_num(argv) || is_bigger_than_ulong_max(argv))
		return (ERROR);
	data->nb_of_philo = atoul(argv);
	return (SUCCESS);
}

int	get_time_to_die(char *argv, t_simulation_data *data)
{
	if (!is_num(argv) || is_bigger_than_ulong_max(argv))
		return (ERROR);
	data->time_to_die = atoul(argv);
	return (SUCCESS);
}

int	get_time_to_eat(char *argv, t_simulation_data *data)
{
	if (!is_num(argv) || is_bigger_than_ulong_max(argv))
		return (ERROR);
	data->time_to_eat = atoul(argv);
	return (SUCCESS);
}

int	get_time_to_sleep(char *argv, t_simulation_data *data)
{
	if (!is_num(argv) || is_bigger_than_ulong_max(argv))
		return (ERROR);
	data->time_to_sleep = atoul(argv);
	return (SUCCESS);
}

int	get_nb_times_to_eat(char *argv, t_simulation_data *data)
{
	if (!is_num(argv) || is_bigger_than_ulong_max(argv))
		return (ERROR);
	data->nb_time_to_eat = atoul(argv);
	return (SUCCESS);
}
