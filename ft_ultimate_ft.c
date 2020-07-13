#include	<unistd.h>

void	ft_ultimate_ft(int ***nbr)
{
	int	x;
	int	*nbr1;
	int	**nbr2;

	x = 5;

	nbr1 = x;
	nbr2 = &nbr1;
	nbr = &nbr2;
	
	
}

int	main()
{
	ft_ultimate_ft(nbr);
	return(0);
}
