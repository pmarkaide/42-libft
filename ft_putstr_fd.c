/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:30:23 by pmarkaid          #+#    #+#             */
/*   Updated: 2024/05/09 14:12:23 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	p;

	p = 0;
	if (!s)
	{
		p = ft_error_w(p, ft_putstr_fd("(null)", 1));
		if (p == -1)
			return (-1);
		return (6);
	}
	p = ft_error_w(p, write(fd, s, ft_strlen(s)));
	if (p == -1)
		return (-1);
	return (p);
}
