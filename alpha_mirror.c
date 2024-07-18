#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_charcmp(char *str, char c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return i;
        i++;
    }
    return 0;
}

int main(int ac, char **av)
{
    int i ;
    int j;
    char *a = "abcdefghijklm";
    char *z = "zyxwvutsrqpon";
    char *A = "ABCDEFGHIJKLM";
    char *Z = "ZYXWVUTSRQPON";
  
    if (ac == 2)
    {
        i = 0;
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                if (av[1][i] >= 'a' && av[1][i] <= 'm')
                {
                    j = ft_charcmp(a, av[1][i]);
                    av[1][i] = z[j];
                }
                else
                {
                    j = ft_charcmp(z, av[1][i]);
                    av[1][i] = a[j];
                }
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                if (av[1][i] >= 'A' && av[1][i] <= 'M')
                {
                    j = ft_charcmp(A, av[1][i]);
                    av[1][i] = Z[j];
                }
                else
                {
                    j = ft_charcmp(Z, av[1][i]);
                    av[1][i] = A[j];
                }
            }
            i++;
        }
        i = 0;
        while (av[1][i])
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;

}