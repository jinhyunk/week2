/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhyunk <jinhyunk@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 04:57:09 by jinhyunk          #+#    #+#             */
/*   Updated: 2022/08/26 09:07:59 by jinhyunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	char arr[10];
	int finish[10];
	int index;
	int pos;


	index = 0;
	while (index <= 9)
	{
		finish[index] = 1;
		arr[index] = index + '0';
		index++;
	}
	finish[0] = 0;
	// you have 0~9 array
	while (finish[0] == 0)
	{
		pos = 0;
		while (arr[pos] < ('9' - n + pos  + 1))
		{
			finish[pos] = 0;
			pos++;
		}
		if (finish[pos] = 1)
		{
			arr[pos - 1]++;
			while (pos < n - 1)
			{
				arr[pos]=arr[pos - 1] + 1;
				pos ++;
			}
			arr[pos] = arr[pos - 1];
		}
		arr[pos]++;
		index = 0;
		while (index < n)
		{
			ft_char(arr[index]);
			index++;
		}
		if (finish[0] == 0)
		{
			ft_char(", ");
		}
	}
}

