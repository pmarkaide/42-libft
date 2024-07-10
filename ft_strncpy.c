/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 11:05:17 by pmarkaid          #+#    #+#             */
/*   Updated: 2024/05/10 11:22:00 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief  Copies up to n characters from the string pointed to by src to dest
 * @note   If the length of src is less than n,
	the remainder of dest will be padded with null bytes.
 *         If the length of src is greater than or equal to n,
	the destination string will not be null-terminated.
 * @param  dest: char pointer - destination string
 * @param  src: const char pointer - source string
 * @param  n: size_t - maximum number of characters to be copied from src
 * @retval returns a pointer to the destination string dest
 */
char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
