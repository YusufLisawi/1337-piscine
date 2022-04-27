/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelaissa <yelaissa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:17:41 by yelaissa          #+#    #+#             */
/*   Updated: 2022/04/04 19:40:19 by yelaissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int    ft_strlen(char *str)
{
    unsigned int    i;    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

unsigned int    ft_check(char *base)
{
    unsigned int    i;
    unsigned int    j;    
	
	i = 0;
    j = 0;
    if (base[0] == '\0' || ft_strlen(base) < 2)
        return (0);
    while (base[i] != '\0')
    {
        j = i + 1;
        if (base[i] <= 32 || base[i] == '+' || base[i] == '-')
            return (0);
        while (base[j] != '\0')
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

void    ft_putnbr_base(int nbr, char *base)
{
    unsigned int    nb;
    unsigned int    len;    

	nb = nbr;
    len = ft_strlen(base);
    if (!ft_check(base))
        return ;
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb < len)
    {
        ft_putchar(base[nb]);
    }
    else
    {
        ft_putnbr_base(nb / len, base);
        ft_putnbr_base(nb % len, base);
    }
}

int main()
{
    ft_putnbr_base(-231325, "");
}