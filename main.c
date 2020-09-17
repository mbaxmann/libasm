/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaxmann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 10:36:53 by mbaxmann          #+#    #+#             */
/*   Updated: 2020/09/17 17:14:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_lentest(char *word)
{
	printf("\nWord: %s\nstrlen:    %3d\nft_strlen: %3d\n",
	word, (int)strlen(word), (int)ft_strlen(word));
}

void	ft_strlen_test(void)
{
	printf("========ft_strlen========\n");
	ft_lentest("first");
	ft_lentest("a");
	ft_lentest("longlonglong");
	ft_lentest("");
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (!ft_strcmp(av[1], "ft_strlen"))
			ft_strlen_test();
		else if (!ft_strcmp(av[1], "ft_strcpy"))
			ft_strcpy_test();
		else if (!ft_strcmp(av[1], "ft_strcmp"))
			ft_strcmp_test();
		else if (!ft_strcmp(av[1], "ft_strdup"))
			ft_strdup_test();
		else if (!ft_strcmp(av[1], "ft_read"))
			ft_read_test();
	}
	return (0);
}
