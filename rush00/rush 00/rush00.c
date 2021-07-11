/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuche <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 13:57:00 by jcuche            #+#    #+#             */
/*   Updated: 2021/07/10 23:15:41 by jcuche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c); /*Appelle de la  */

void	print_inline(int x, char start, char middle, char end)
{
	ft_putchar(start);
	while ((x - 1) > 1)
	{
		ft_putchar(middle);
		x--;
	}			
	if (x > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_inline(x, 'o', '-', 'o');
		y--;
		while (y > 1)
		{
			print_inline(x, '|', ' ', '|');
			y--;
		}
		if (y > 0)
			print_inline(x, 'o', '-', 'o');
		return ;
	}
}
