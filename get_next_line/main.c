#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "libft.h"

int get_next_line(const int, char **);

int main(int ac, char**av)
{
	int		fd[16];
	char	*yo[16];
	int		count;
	int		i;
	int		ret;
	char *line;

	count = 0;
	
	/*fd[1] = open(av[1], O_RDONLY);
	while (get_next_line(fd[1], &line) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
	free(line);*/

	for (int i = 1; i < ac; i++)
		fd[i - 1] = open(av[i], O_RDONLY);
	for (int i = 0; i < ac - 1; i++)
	{
		printf("LECTURE DU FICHIER %d\n\n",i);
		while ((ret = get_next_line((const int)fd[i], &yo[i])) > 0)
		{
			printf("LINE : %s\nRET : %d\nCOUNT : %d\n",yo[i], ret, count);
			count++;
			free(yo[i]);
		}
		printf("%s << FIN DU FICHIER %d ret:%d count:%d\n\n", yo[i], i, ret,count);
		free(yo[i]);
	}
	return (0);
}
