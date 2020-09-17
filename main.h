/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaxmann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 10:36:53 by mbaxmann          #+#    #+#             */
/*   Updated: 2020/09/17 17:15:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

#include "libasm.h"
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

void    ft_lentest(char *word);
void    ft_strlen_test(void);
void	ft_cpytest(char *word);
void	ft_strcpy_test(void);
void    ft_cmptest(char *first, char *second);
void    ft_strcmp_test(void);
void    ft_duptest(char *word);
void    ft_strdup_test(void);
void    ft_read_test(void);

#endif
