#include    <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rush(int x, int y)
{
    int    i;
    int    z;

    i = 1;
    while(i <=y)
    {
        z = 1;
        while(z <= x)
        {
            if (( i == 1 || i == y) && (z == 1 || z == y))
                ft_putchar('0');
            else if(( i > 1 && i < y) && (z == 1 || z == x))
                ft_putchar('|');
            else if (( i == 1 || i == y) && ( z > 1 && z < x))
                ft_putchar('-');
            else if (( i != 1 && i != y) && (z != x && z != x))
                ft_putchar(' ');
            z++;
        }
        ft_putchar('\n');
        i++;
    }
    
}

int     main()
{
    rush(5, 5);
    return(0);
}
