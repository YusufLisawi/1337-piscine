/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelaissa <yelaissa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:52:03 by yelaissa          #+#    #+#             */
/*   Updated: 2022/03/24 13:18:59 by yelaissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_commas(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	ab;
	int	cd;

	ab = 0;
	cd = 0;
	while (ab < 100)
	{
		cd = ab + 1;
		while (cd < 100)
		{
			ft_putchar('0' + ab / 10);
			ft_putchar('0' + ab % 10);
			ft_putchar(' ');
			ft_putchar('0' + cd / 10);
			ft_putchar('0' + cd % 10);
			if (ab != 98)
			{
				ft_commas();
			}
			cd++;
		}
		ab++;
	}
}
