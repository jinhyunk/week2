/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhyunk <jinhyunk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 02:37:12 by jinhyunk          #+#    #+#             */
/*   Updated: 2022/08/27 21:55:09 by jinhyunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while  (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c=b+1;
			while (c <= 9)
			{
				ft_char(48 + a);
				ft_char(48 + b);
				ft_char(48 + c);
				if ( a  == 7 && b == 8 && c == 9)
				{
					break;
				}
				write(1, &", ", 1);
				c++;
			}
			b++;
		}
		a++;
	}
}

