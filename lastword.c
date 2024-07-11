#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int k;

	j = 0;
	k = 0;
	i = ft_strlen(argv[1]) - 1;
	if (argc == 2)
	{
		while (i >= 0)
		{
			while (argv[1][i] == ' ' || argv[1][i] == '	')
				i--;
			k = i;
			while (argv[1][i] != ' ' && argv[1][i] != '	' &&  i >= 0)
			{
				j = i;
				i--;
			}
			while (j <=k)
			{
				write(1, &argv[1][j], 1);
				j++;
			}
			break;
		}
	}
	write(1, "\n", 1);
	return (0);
}
