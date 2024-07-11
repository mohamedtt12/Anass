#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int	ft_checkdoubles(char *str, char c, int indexe)
{
	int	i;

	i = 0;
	while (str[i] && i < indexe)
	{
		if (str[i] == c)
			return 0;
		i++;

	}
	return 1;
}

int main(int argc, char **argv) 
{
	int	i;
	int	j;

	if (argc == 3)
	{	
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					if (ft_checkdoubles(argv[1],argv[1][i], i ))
					{
						write(1, &argv[1][i], 1);
						break;
					}
				}
				j++;
			}
			i++;
		}
	}
	
	write(1, "\n", 1);
	return 0;
}

