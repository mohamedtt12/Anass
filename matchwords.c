#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_check(char *s1, char *s2)
{
	int i;
	int j;
	int indexe;
	int flag;

	i = 0;
	indexe = 0;
	while (s1[i])
	{
		j = i;
		flag = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				if (j >= indexe)
				{
					indexe = j;
					flag = 1;
					break;	
				}
			}
			j++;
		}
		if(!flag)
			return 0;
		i++;
	}
	return 1;
}

void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv) 
{
	if (argc == 3)
	{
		if (ft_check(argv[1], argv[2]))
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return 0;
}

