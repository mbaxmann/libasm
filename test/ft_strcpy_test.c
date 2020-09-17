/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaxmann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 10:36:53 by mbaxmann          #+#    #+#             */
/*   Updated: 2020/09/17 12:20:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	ft_cpytest(char *word)
{
	char *dest1;
	char *dest2;

	dest1 = (char *)malloc(sizeof(char) * 100);
	dest2 = (char *)malloc(sizeof(char) * 100);
	strcpy(dest1, word);
	ft_strcpy(dest2, word);
	printf("\nWord:      %s		Word_ptr:      %p\n"
	"strcpy:    %s		strcpy_ptr:    %p\n"
	"ft_strcpy: %s		ft_strcpy_ptr: %p\n",
	word, word, dest1, dest1, dest2, dest2);
	free(dest1);
	free(dest2);
}

void	ft_strcpy_test(void)
{
	printf("========ft_strcpy========\n");
	ft_cpytest("first");
	ft_cpytest("a");
	ft_cpytest("longlonglong");
	ft_cpytest("");
	ft_cpytest("ammmmamamamma");
}
