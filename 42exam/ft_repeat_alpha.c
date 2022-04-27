#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	char	*str;
	int		index;

	i = 0;
	str = av[1];
	if (ac == 2)
	{
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				index = str[i] - 96;
			else if (str[i] >= 'A' && str[i] <= 'Z')
				index = str[i] - 64;
			while (index > 0)
			{
				write(1, &str[i], 1);
				index--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
