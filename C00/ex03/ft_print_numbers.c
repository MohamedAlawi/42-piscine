/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malawi <malawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:17:41 by malawi            #+#    #+#             */
/*   Updated: 2025/05/03 15:41:59 by malawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	digit;
	char	flag;

	flag = '9';
	digit = '0';
	while (digit <= flag)
	{
		write(1, &digit, 1);
		digit = digit + 1;
	}
}
// int main(){
// 	ft_print_numbers();

// 	return 0;
// }