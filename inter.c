#include <unistd.h>

int	ft_rm_doubles(char *str, int index, char c )
{
	int	i;

	i = index - 1;
	while (i > 0)
	{
		if (str[i] == c)
			return (0);
		i--;
	}
	return (1);
}

void	ft_find(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while ((s2[j] != s1[i]) && s2[j])
			j++;
		if (s1[i] == s2[j])
		{
			if (ft_rm_doubles(s1, i, s1[i]))
				write(1, &s1[i], 1);
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		if (argv[1] && argv[2])
			ft_find(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}
