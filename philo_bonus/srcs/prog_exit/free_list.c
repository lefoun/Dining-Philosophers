/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noufel <noufel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:35:51 by nammari           #+#    #+#             */
/*   Updated: 2022/01/04 06:44:50 by noufel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	free_list(t_philo *head)
{
	t_philo	*tmp;
	t_philo	*first_philo;

	first_philo = head;
	if (head == NULL)
		return ;
	while (head->right_philo != first_philo)
	{
		tmp = head;
		head = head->right_philo;
		free(tmp);
		tmp = head;
	}
	free(head);
}