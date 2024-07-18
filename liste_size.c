#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;


 
int	ft_list_size(t_list *begin_list)
{
    t_list *p = begin_list;
    int count = 0;
    while (p)
    {
        count ++;
        p = p -> next;
    }
    return count;
}