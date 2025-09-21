/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malawi <malawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:41:16 by malawi            #+#    #+#             */
/*   Updated: 2025/05/07 02:41:18 by malawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_copy_strs(char *st, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			st[k++] = strs[i][j++];
		if (i < size - 1)
		{
			l = 0;
			while (sep[l])
				st[k++] = sep[l++];
		}
		i++;
	}
	st[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	int		i;
	char	*st;

	if (size == 0)
	{
		st = (char *)malloc(1);
		if (st)
			st[0] = '\0';
		return (st);
	}
	length = 0;
	i = 0;
	while (i < size)
		length += ft_len(strs[i++]);
	length += ft_len(sep) * (size - 1);
	st = (char *)malloc(sizeof(char) * (length + 1));
	if (!st)
		return (0);
	ft_copy_strs(st, strs, sep, size);
	return (st);
}
