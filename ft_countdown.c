#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_countdown()
{
    int     start;

    start = 9;

    while(start >= 0)
    {
        ft_putchar(start);
        start--;
    }

}