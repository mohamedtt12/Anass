#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"
#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void	ft_putnbr(int nb)
{
	int		n;
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2", 1);
			write(1, "147483648", 9);
		}
		else
			ft_putnbr(nb * (-1));
	}
	else
	{
		n = nb / 10;
		if (n != 0)
			ft_putnbr(n);
		c = nb % 10 + 48;
		write(1, &c, 1);
	}
}

void    ft_show_tab(struct s_stock_str *par)
{
    int i;

    i = 0;
    while (par[i].str)
    {
        ft_putstr(par[i].str);
        write(1, "\n", 1);
        ft_putnbr(par[i].size);
        write(1, "\n", 1);
        ft_putstr(par[i].copy);
        write(1, "\n", 1);
        i++;
    }
}
int main(void)
{
	char *av[]={"Mohamed", "Anass", "Louchame", "Rafik"};
	t_stock_str *array;
	array = ft_strs_to_tab(4, av);
	printf("%d", array[0].size);
	return (0);
}