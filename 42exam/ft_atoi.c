int	ft_atoi(const char *str)
{
	int sign;
	int result;
	int i;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("%d\n", ft_atoi("  -65654  "));
	printf("%d", atoi("  +65654  "));
}