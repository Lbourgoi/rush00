/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:56:27 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/10 22:48:30 by jcuche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_inline(int x, char start, char middle, char end)
{
	ft_putchar(start);
	while ((x - 1) > 1)
	{
		ft_putchar(middle);
		x--;
	}
	if (x - 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_inline(x, 'A', 'B', 'C');
		y--;
		while (y > 1)
		{
			print_inline(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 0)
			print_inline(x, 'A', 'B', 'C');
		return ;
	}
}
