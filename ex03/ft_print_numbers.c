/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhyunk <jinhyunk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 02:31:42 by jinhyunk          #+#    #+#             */
/*   Updated: 2022/08/26 02:34:39 by jinhyunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char a;

	a = '0';
	while (a <= '9')
	{
		ft_char(a);
		a++;
	}
}

void	ft_char(char c)
{
	write(1, &c, 1);
}
