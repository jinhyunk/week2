/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhyunk <jinhyunk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 02:07:19 by jinhyunk          #+#    #+#             */
/*   Updated: 2022/08/26 02:23:54 by jinhyunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char start;

	start = 'a';
	while (start <= 'z')
	{
		ft_putchar(start);
		start++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
