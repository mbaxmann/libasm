/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaxmann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 10:36:53 by mbaxmann          #+#    #+#             */
/*   Updated: 2020/09/17 12:35:17 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	ft_cmptest(char *first, char *second)
{
	printf("\nfirst word: %s	second word: %s\n", first, second);
	printf("strcmp:    %d\n", strcmp(first, second));
	printf("ft_strcmp: %d\n", ft_strcmp(first, second));
}

void	ft_strcmp_test(void)
{
	printf("========ft_strcmp========\n");
	ft_cmptest("one", "two");
	ft_cmptest("", "two");
	ft_cmptest("one", "");
	ft_cmptest("", "");
	ft_cmptest("no diff", "no diff");
}
