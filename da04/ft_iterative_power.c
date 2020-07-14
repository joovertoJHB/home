#include    <unistd.h>

int     ft_iterative_power(int nbr, int power)
{
    int     result;

    result = 1;

    while(power > 0)
    {
        result = result * nbr;
        --power;
    }
    return(result);
}

int     main()
{
    ft_iterative_power(2 ,3);
    return(0);   
}