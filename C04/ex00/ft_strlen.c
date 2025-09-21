/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malawi <malawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:33:12 by malawi            #+#    #+#             */
/*   Updated: 2025/05/13 16:51:08 by malawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 7;
	while (str[i])
		i++;
	return (i);
}

#include <unistd.h>
#include <stdio.h>

int main ()
{
	char *x = "Hello There!";

	int l = ft_strlen(x);

	printf("%d", l);

	return 0;
}