/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 19:44:53 by htalhaou          #+#    #+#             */
/*   Updated: 2022/03/27 19:47:18 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int width, char start, char mid, char end)
{
	int	i;

	i = 0;
	while (i < width)
	{
		if (i == 0)
		{
			ft_putchar(start);
		}
		else if (i == width - 1)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(mid);
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;

	row = 1;
	if (x > 0 && y > 0)
	{
		while (row <= y)
		{	
			if (row == 1)
				print_line(x, '/', '*', '\\');
			else if (row == y)
				print_line(x, '\\', '*', '/');
			else
				print_line(x, '*', ' ', '*');
			row++;
		}
	}
	else
	{
		return ;
	}
}
