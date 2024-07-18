#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_check(char *s1, char *s2)
{
    int i;
   int j;
   int indexe;
   int flag;

    i = 0;
        indexe = 0;
        while (s1[i])
        {
            j = indexe;
            flag = 0;
            while (s2[j])
            {
                if (s1[i] == s2[j])
                {
                    flag = 1;
                    indexe = j;
                    break;
                }
                j++;
            }
        if (!flag)
            return 0;
        i++;
        }
        return 1;

}

int main(int ac, char **av)
{

    
    if (ac == 3)
    {
        if(ft_check(av[1], av[2]))
        {
            write(1,"1", 1);
        }
        else
        write(1, "0", 1);  
    }
    write(1, "\n", 1);
    return 0;
}