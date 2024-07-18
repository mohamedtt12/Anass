#include <unistd.h>
#include <stdio.h>
int ft_charcmp(char c)
{
    char *a ="abcdefghijklmnopqrstuvwxyz";
    char *A = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;

    i = 0;
    if (c >= 'a' && c <= 'z')
    {
        while (a[i])
        {
            if (a[i] == c)
                return (i + 1);
                i++;
        }
    }
    else if (c >= 'A' && c <= 'Z')
    {
        while (A[i])
        {
            if (A[i] == c)
                return (i + 1);
            i++;
        }
    }
    else
    return 1;
    return 0;
}

int main(int ac, char **av) 
{
    int  i;
    int j;
    
   if (ac == 2)
   {
        i = 0;
        while (av[1][i])
        {
            j = 0;
            j = ft_charcmp(av[1][i]);
            while (j > 0)
            {
                write(1, &av[1][i], 1);
                j--;
            }
            i++;
        }
   }
   write(1, "\n", 1);
   return (0);
}