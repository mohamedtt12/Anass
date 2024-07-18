#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>




int main(int argc, char **argv) 
{
	int	i;
	int	flag;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '	')
			{
				i++;
			}
		while (argv[1][i])
		{
			
			while (argv[1][i] != ' ' && argv[1][i] != '	' && argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
				flag = 1;
			}
			if ((argv[1][i] == ' ' || argv[1][i] == '	') && flag == 1)
			{
				write(1, " ", 1);
				flag = 0;
				i++;
			}
			else if (!argv[1][i])
				break;
			else 
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}

