#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_count_words(char *str)
{
	int	i;
	int	flag;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
    {
    	while (str[i] == ' ' || str[i] == '	' || str[i] == '\n')
		{
			i++;
		}
		while ((str[i] != ' ' && str[i] != '	' && str[i] != '\n') && str[i] )
		{
			i++;
			flag = 1;
		}
		if (flag)
			count++;
		if (!str[i])
			return (count);
		flag = 0;
	}
	return (count);
}

int 	ft_findword(char *str, int n)
{
	int	i;
	int indexe;

	i = n;
	indexe = n;
	while (str[i])
    {
    	while (str[i] == ' ' || str[i] == '	' || str[i] == '\n')
		{
			i++;
		}
		if (str[i])
		{
			indexe = i;
			return (indexe);
		}
	}
	return (indexe);
}

char	*ft_strdup(char *src, int *n)
{
	char	*p;
	int		i;

	i = 0;
	while ((src[i] != ' ' && src[i] != '	' && src[i] != '\n') && src[i])
		i++;
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (p == NULL)
		return (0);
	i = 0;
	while ((src[i] != ' ' && src[i] != '	' && src[i] != '\n') && src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	if(n - 1 >= 0)
		(*n)++;	
	*n = *n + i ;
	return (p);
}

char	**ft_split(char *str)
{
	int	i;
	int j;
	int	indexe;
	char	**strs;

	strs = malloc(sizeof(char*) * (ft_count_words(str) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] && j < ft_count_words(str))
	{
		indexe = ft_findword(str, i);
		strs[j] = ft_strdup(str + indexe, &i);
		j++;
	}
	strs[j] = NULL;
	return (strs);
}

int main(void)
{
    char *str = " Hello World 42network anass";
	char **array;
	array = ft_split(str);
	int i = 0;
	while (array[i])
	{
	printf("%s\n", array[i]);i++;
	}
}