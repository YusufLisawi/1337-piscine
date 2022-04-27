
int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char    *ft_strrev(char *str)
{
	int i;
	char tmp;
	int lenstr;

	lenstr = len(str) - 1;
	i = 0;
	while (i < lenstr)
	{
		tmp = str[i];
		str[i] = str[lenstr];
		str[lenstr] = tmp;
		i++;
		lenstr--;
	}
	return (str);
}
// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	printf("%s", ft_strrev(av[1]));
// }