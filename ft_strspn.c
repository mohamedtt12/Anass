#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *reject)
{
	int	i;
	int	j;
	int	len;
	int flag;

	i = 0;
	len = 0;
	if (!*s || !*reject)
	return 0;
	while (s[i])
	{
		j = 0;
		flag = 0;
		while (reject[j])
		{
			if (s[i] == reject[j] )
			{
				len++;
				flag = 1;
				break;
			}
			j++;
		}
		if (!flag)
			break;
		i++;
	}
	return len;

}


int main() 
{

char *str= "hello world";
char *charset = "h";
//strpbrk(str,charset);
	printf("%zu", ft_strspn(str,charset));
	return 0;
}

