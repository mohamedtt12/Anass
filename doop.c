#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int ac, char **av)
{
    int i;
    int n1;
    int n2;

    if (ac == 4)
    {
        i = 0;
        n1 = atoi(av[1]);
        n2 = atoi(av[3]);
        if (av[2][0] == '*')
            printf("%d\n", n1 * n2);
        else if (av[2][0] == '+')
            printf("%d\n", n1 + n2);
        else if (av[2][0] == '-')
            printf("%d\n", n1 - n2);
        else if (av[2][0] == '/' && n2)
            printf("%d\n", n1 / n2);  
        else if (av[2][0] == '%')
            printf("%d\n", n1 + n2);   
    }
    else 
    write(1, "\n", 1);
    return (0);
}