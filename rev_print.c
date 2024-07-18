#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int main(int ac, char **av)
{
    int i;

    if (ac == 2)
    {
        i =ft_strlen(av[1]) - 1 ;
        while (i >= 0)
        {
            write(1, &av[1][i], 1);
            i--;
        }
    }
    write(1, "\n", 1);
    return (0);
}