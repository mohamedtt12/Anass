#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;
    size_t count = 0;

    i = 0;
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return count;
            j++;
        }
        count++;
        i++;
    }
    return count;
}


int main() 
{

char *str= "";
char *charset = "fhakfhal";
//strpbrk(str,charset);
	printf("%zu", strcspn(str,charset));
	return 0;
}

