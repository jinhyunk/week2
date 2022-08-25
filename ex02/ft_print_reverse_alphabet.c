/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhyunk <jinhyunk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 02:25:18 by jinhyunk          #+#    #+#             */
/*   Updated: 2022/08/26 02:30:44 by jinhyunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverese_alphabet(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		ft_char(c);
		c--;
	}
}

void	ft_char(char c)
{
	write(1, &c, 1);
}
