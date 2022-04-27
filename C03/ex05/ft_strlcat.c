/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelaissa <yelaissa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:03:30 by yelaissa          #+#    #+#             */
/*   Updated: 2022/04/10 16:19:03 by yelaissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;
	unsigned int	dest_len;
	unsigned int	o_dest_len;

	s = size;
	dest_len = ft_strlen(dest);
	o_dest_len = ft_strlen(dest);
	if (s < dest_len)
		return (s + ft_strlen(src));
	i = 0;
	while (s > 0 && dest_len < size - 1 && src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (o_dest_len + ft_strlen(src));
}
