/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhyunk <jinhyunk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 02:56:55 by jinhyunk          #+#    #+#             */
/*   Updated: 2022/08/26 03:02:14 by jinhyunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int num1;
	int num2;

	while (num1 <=98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_char(48 + num1 / 10);
			ft_char(48 + num1 % 10);
			ft_char(" ");
			ft_char(48 + num2 / 10);
			ft_char(48 + num2 % 10);
			if (num1 == 98 && num2 == 99)
			{
				break;
			}
			ft_char(", ");
			num2++;
		}
		num1++;
	}
}

