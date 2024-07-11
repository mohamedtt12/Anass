#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				if (argv[1][i] <= 'm')
					argv[1][i] += 13;
				else 
					argv[1][i] -= 13;
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				if (argv[1][i] <= 'M')
					argv[1][i] += 13;
				else 
					argv[1][i] -= 13;
			}
			i++;
		}
		ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
