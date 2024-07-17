/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char_array.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:56:42 by pmarkaid          #+#    #+#             */
/*   Updated: 2024/07/17 12:47:08 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief  Prints each string in the given array to the standard output
 * @note   Each string is printed on a new line.
 *         The function assumes that the array is null-terminated.
 * @param  array: char double pointer - an array of strings to be printed
 * @retval None
 */
void	ft_print_char_array(char **array)
{
	size_t	i;

	if (array == NULL)
	{
		ft_printf("Error: array is NULL\n");
		return ;
	}
	i = 0;
	while (array[i] != NULL)
		ft_printf("%s\n", array[i++]);
}
