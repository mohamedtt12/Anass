#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_power(nb, power - 1));
}

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
    {
        i++;
    }
    return i;
}
int ft_to_base(char c)
{
    char *base = "0123456789abcdef";
    char *base2 = "0123456789ABCDEF";
    int i = 0;
    if (c >= 'A' && c <= 'F')
    {
        while(base2[i])
        {
            if (base2[i] == c)
                return (i);
            i++;    
        }
   }
    else
    {
        while(base[i])
        {
            if (base[i] == c)
                return (i);
            i++;    
        }
    }
    return (0);
}

int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int nbr = 0;
    int pow;
    char *str2 =(char*)str;
    int len  = ft_strlen(str2);
    
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;                   
        i++;
        len--;
    }
    pow = len - 1;
    while (str[i] && pow >= 0)
    { 
        nbr = nbr + (ft_to_base(str[i]))* ft_power(str_base, pow);
        i++;
        pow--;
    }
    return (nbr * sign);
}

int main()
{
    char *str = "101010";
    int number ;
    number = ft_atoi_base(str, 2);
    printf("%d", number);

}