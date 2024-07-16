#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_nbrlen(int nbr)
{
    int count;

    count = 0;
    while (nbr)
    {
        nbr = nbr / 10;
        count++;
    }
    return (count);
}

char    *ft_itoa(int nbr)
{
    char *str;
    int i;
    int j =nbr;

    if (nbr < 0)
    {
        nbr = -nbr;
        str = malloc(sizeof(char) * (ft_nbrlen(nbr) + 1) + 1);
        if (!str)
        return (NULL);
        i = ft_nbrlen(nbr);
        while (i >= 0)
        {
            str[i] = (nbr % 10) + 48;
            nbr = nbr / 10;
            i--;
        }
        str[0] = '-';
        str[ft_nbrlen(j) + 1] = '\0';
        return (str);
    }
    else
    {
        str = malloc(sizeof(char) * ft_nbrlen(nbr) + 1);
        if (!str)
            return (NULL);
        if (nbr == 0)
        {
            str[0] = '0';
            return (str);
        }
        i = ft_nbrlen(nbr) - 1 ;
        while (i >= 0)
        {
            str[i] = (nbr % 10) + 48;
            nbr = nbr / 10;
            i--;
        }
        str[ft_nbrlen(j)] = '\0';
        return (str);
    }
}

int main()
{
    int nbr =-0;
    char *str ;
    str = ft_itoa(nbr);
    printf("%s", str);
}