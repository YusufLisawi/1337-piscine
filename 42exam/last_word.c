#include <unistd.h>

int main(int ac, char **av)
{
	int	i;
	int yes;

	yes = 0;
	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
			{
				yes = 1;
				break;
			}
			i++;
		}
		i = 0;
		// from below
		while (av[1][i] != '\0')
			i++;
		i -= 1;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i--;
		while (i > 0)
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
				break;
			i--;
		}
		// i++;
		if (yes == 1)
			i++;
		while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

