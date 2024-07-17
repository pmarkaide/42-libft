/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int_array.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmarkaid <pmarkaid@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:47:52 by pmarkaid          #+#    #+#             */
/*   Updated: 2024/07/17 16:05:26 by pmarkaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief  Prints each int in the given array to the standard output
 * @note   Each int is printed on a new line.
 *         The function assumes that the array is null-terminated.
 * @param  array: char double pointer - an array of int to be printed
 * @retval None
 */
void	ft_print_int_array(int **array)
{
	size_t	i;

	if (array == NULL)
	{
		ft_printf("Error: array is NULL\n");
		return ;
	}
	i = 0;
	while (array[i] != NULL)
	{
		ft_printf("%d\n", *(array[i]));
		i++;
	}
}
