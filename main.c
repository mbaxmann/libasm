/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaxmann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 10:36:53 by mbaxmann          #+#    #+#             */
/*   Updated: 2020/09/14 15:07:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, const char *src);
int	ft_strcmp(const char *s1, const char *s2);
ssize_t ft_write(int fd, const void *buf, size_t count);
ssize_t read(int fd, void *buf, size_t count);

int	main()
{
	char *mot = "oo\0oo";
	char *cpy = (char *)malloc(sizeof(char) * 8);
	char *cpy2 = (char *)malloc(sizeof(char) * 8);
	printf("strlen : %d	ft_strlen : %d\n", (int)strlen(mot), (int)ft_strlen(mot));
	printf("strcpy: %s	ft_strcpy: %s	le mot: %s\n",
	strcpy(cpy, mot), ft_strcpy(cpy2, mot), mot);
	printf("strcmp: %d	ft_strcmp: %d\n", strcmp("zoz", ""), ft_strcmp("zoz", ""));
	write(1, "A", 1);
	ft_write(1, "A", 1);
	return (0);
}
