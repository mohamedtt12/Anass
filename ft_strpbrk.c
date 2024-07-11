#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int j;
	char *p;

if (!*s1 || !*s2)
	return 0;
	i = 0;
	p = (char *)s1;
while (p[i])
{
	j = 0;
	while (s2[j])
	{
		if (p[i] == s2[j])
		{
			return (p + i);
		}
		j++;
	}
	i++;
}
return 0;
}


int main() 
{

char *str= "hello world";
char *charset = "z";
//strpbrk(str,charset);
	printf("%s", ft_strpbrk(str,charset));
	return 0;
}

