/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:08:37 by pmarkaid          #+#    #+#             */
/*   Updated: 2023/10/25 12:30:31 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#ifndef LIBFT_H
#define LIBFT_H

// Own functions
int	ft_islower(int c);
int	ft_isupper(int c);

// Part 1
int ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isalnum(int c);
size_t	ft_strlen(const char *s);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	isascii(int c);
int	isprint(int c);


// Part 2

// Bonus

#endif