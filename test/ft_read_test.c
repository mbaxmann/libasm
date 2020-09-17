/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaxmann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 10:36:53 by mbaxmann          #+#    #+#             */
/*   Updated: 2020/09/17 17:29:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	ft_read_test(void)
{
	char *buffer;

	buffer = (char *)malloc(sizeof(char));
	ft_read(1, buffer, 100);
	ft_write(1, buffer, ft_strlen(buffer));
	while (ft_strcmp(buffer, "exit\n"))
	{
		free(buffer);
		buffer = (char *)malloc(sizeof(char));
		ft_read(1, buffer, 100);
		ft_write(1, buffer, ft_strlen(buffer));
	}
	free(buffer);
}
