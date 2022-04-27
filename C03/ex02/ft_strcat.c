/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelaissa <yelaissa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:31:57 by yelaissa          #+#    #+#             */
/*   Updated: 2022/03/29 06:57:48 by yelaissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	last;

	i = 0;
	last = len(dest);
	while (src[i] != '\0')
	{
		dest[last + i] = src[i];
		i++;
	}
	dest[last + i] = '\0';
	return (dest);
}
