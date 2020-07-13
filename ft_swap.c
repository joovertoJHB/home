#include	<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	placeholder;

	*a = placeholder;
	placeholder = *b;
	*b = *a;
}
