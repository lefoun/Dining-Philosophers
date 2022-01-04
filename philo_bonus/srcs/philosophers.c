/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noufel <noufel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:14:58 by nammari           #+#    #+#             */
/*   Updated: 2022/01/04 06:44:50 by noufel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

int	main(int argc, char **argv)
{
	t_simulation_data	data;
	t_philo				*head;
	
	if (parse_input(argc, argv, &data) != SUCCESS)
		return (ERROR);
	head = create_philosopher_linked_list(&data);
	if (head == NULL)
		return (ERROR);
	data.philo_lst = head;
	if (pthread_mutex_init(&data.ts_print, NULL) != 0)
		printf("Error init data->mutex\n");
	get_time();
	if (start_simulation(&data, head))
		return (ERROR);
	terminate_simulation(&data, head);
	free_list(head);
	return (SUCCESS);
}