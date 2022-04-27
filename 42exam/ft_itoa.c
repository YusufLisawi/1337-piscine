#include <stdlib.h>

int len(int nb)
{
	int len = 0;

	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return len;
}

char *ft_itoa(int nb)
{
	char *str;
	long n;
	int i;

	n = nb;
	i = len(n);
	str = (char *) malloc((i + 1) * sizeof(char));
	if (!str)
		return 0;
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n /= 10;
		i--;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_itoa(1342345));
}