/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaxmann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 10:36:53 by mbaxmann          #+#    #+#             */
/*   Updated: 2020/09/17 16:19:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	ft_duptest(char *word)
{
	char *dup1;
	char *dup2;

	dup1 = strdup(word);
	dup2 = ft_strdup(word);
	printf("\nWord:      %s		Word_ptr:      %p\n"
	"strdup:    %s		strdup_ptr:    %p\n"
	"ft_strdup: %s		ft_strdup_ptr: %p\n",
	word, word, dup1, dup1, dup2, dup2);
	free(dup1);
	free(dup2);
}

void	ft_strdup_test(void)
{
	printf("========ft_strdup========\n");
	ft_duptest("first");
	ft_duptest("");
	ft_duptest("abcd");
	ft_duptest("loooooooooonnnnnngggg");
	ft_duptest("a");
	ft_duptest("cbabhbabeblbad");
}
