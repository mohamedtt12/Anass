#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	if (n <= 1)
		return 0;
	i = 1;
	while (i <= n /2 )
	{
		i = i * 2;
		if (i == n)
		return 1;
	}
	return 0;
}


int main() 
{
	unsigned int i = is_power_of_2(2);
	printf("%d", i);
	return 0;
}

