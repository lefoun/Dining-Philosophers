/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noufel <noufel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:38:58 by nammari           #+#    #+#             */
/*   Updated: 2022/01/08 11:32:49 by noufel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	error_message(int error_type)
{
	const char	*table[6];

	table[THREAD_CREATION] = "Error! Pthread_create failed\n";
	table[EMPTY_LIST] = "Error! Empty list\n";
	table[EMPTY_ELEM] = "Error! Pushing NULL Elem to list\n";
	table[INVALID_NB_ARGS] = "Error! Invalid number of arguments\n";
	table[PROMPT_USER_INPUT] = "The program should take "
		"the following arguments:\n\n"
		"number_of_philosophers time_to_die time_to_eat time_to_sleep "
		"[number_of_times_each_philosopher_must_eat]\n";
	ft_putstr_fd((char *)table[error_type], 2);
	return (ERROR);
}

void	*malloc_error(char *error_msg)
{
	if (error_msg == NULL)
	{
		ft_putstr_fd("Error\n", 2);
	}
	else
	{
		ft_putstr_fd(error_msg, 2);
	}
	return (NULL);
}

void	*mutex_creation_error(void)
{
	ft_putstr_fd("Mutex_init_failed at Philosopher\n", 2);
	return (NULL);
}
