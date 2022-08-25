/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhyunk <jinhyunk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 03:03:19 by jinhyunk          #+#    #+#             */
/*   Updated: 2022/08/26 04:56:21 by jinhyunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_char("-");
		ft_char("2");
		nb=147483648;
	}
	else if (nb < 0){
		nb = -nb;
		ft_char("-");
	}
	else{
		if (nb > 9)
		{
			ft_char(nb / 10)
		}
		ft_char(48 + nb % 10);
	}
}
