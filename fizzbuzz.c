#include <unistd.h>

void	ft_putnbr(int i)
{
	char c;
	if ( i > 9)
	{
	c = i / 10 + 48;
	write(1, &c, 1);
	c = i % 10 + 48;
	write(1, &c, 1);
	}
	else 
	{
	c = i % 10 + 48;
	write(1, &c, 1);
	}
}

int main(void)
{
    int i;
	
	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else 
		{
			ft_putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
    return (0);
}