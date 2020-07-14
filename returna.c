#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_finda(char *str)
{
	char		i;

	i = 0;

	while(str[i])
	{
		if(str[i] == 'a')
		{
			ft_putchar(str[i]);
			ft_putchar('/n');
			break;
		}
		i++;
	}
}
		
