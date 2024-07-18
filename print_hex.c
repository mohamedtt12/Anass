#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	sign = 0;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	if (sign % 2 != 0)
		return (-nbr);
	else
		return (nbr);
}

void ft_to_base(int nbr)
{
    char *base  = "0123456789abcdef";
    int result = 0;

    result = nbr / 16;
    if (result)
        ft_to_base(result);
    write(1, &base[nbr % 16], 1);
}


int main(int ac, char **av)
{
    if (ac == 2)
    {
        int nbr = ft_atoi(av[1]);
        ft_to_base(nbr);
    }
    write(1, "\n", 1);
    return 0;

}