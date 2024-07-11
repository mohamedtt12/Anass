#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

void	ft_swap(char*a, char*b)
{
	char	tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_putstr(char*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_rev_print(char *str)
{
	int	n;
	int	m;

	n = 0;
	m = ft_strlen(str) - 1;
	while (n < m)
	{
		ft_swap(&str[n],&str[m]);
		m--;
		n++;
	}
	ft_putstr(str);
	return (str);
}

int	main(void)
{
	char str[20] = "hello world";
	ft_rev_print(str);
	return 0;
}

