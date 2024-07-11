#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

unsigned	ft_recursive_power(unsigned int nb, int power)
{
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int	is_power_of_2(unsigned int n)
{
	unsigned int i;

	i = 1;
	while ( i <= n / 2 )
	{
		if (ft_recursive_power(2, i) == n)
		return 1;
		i++;
	}
	return 0;
}


int main() 
{
	unsigned int i = is_power_of_2(1);
	printf("%d", i);
	return 0;
}

