#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_search(char *str, char c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return i;
}

int main(int ac, char **av)
{
    int i;

    if (ac == 4 && (ft_strlen(av[2])==1 ) && (ft_strlen(av[2]) == 1))
    {
        i = 0;
        if (ft_search(av[1], av[2][0]))
        {
            while (av[1][i])
            {
                if (av[1][i] == av[2][0])
                    av[1][i] = av[3][0];
                i++;    
            }
        }
        i = 0;
        while (av[1][i])
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}