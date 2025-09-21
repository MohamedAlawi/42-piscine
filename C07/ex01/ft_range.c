/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malawi <malawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 00:26:15 by malawi            #+#    #+#             */
/*   Updated: 2025/05/13 17:47:47 by malawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*num;
	int	i;

	if (min >= max) // (8, 6)
		return (0);
	num = (int *)malloc(sizeof(int) * (max - min));
	if (!num)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		num[i] = min + i;
		i++;
	}
	return (num);
}

