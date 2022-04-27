#include <unistd.h>

int main(int ac, char **av)
{
	int a;

	a = 0;
	if (ac > 2 || ac == 1)
		write(1, "a\n", 2);
	if (ac == 2)
	{
		while (av[1][a] != '\0')
		{
			if (av[1][a] == 'a')
				write(1, "a", 1);
			a++;
		}
		write(1, "\n", 1);
	}
}