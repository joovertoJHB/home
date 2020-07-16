#include <unistd.h>

int     ft_stcmp(char *s1, char *s2)
{
    int     i;

    i = 0;
    while(s1[i] == s2[i] && s1[i] != '\0')
    {
        if(s1[i] < s2[i])
        {
            return("s2 is greater than s1");
        }
        else if(s1[i] > s2[i])
        {
            return("s1 is greater than s2");
        }
        else
        {
            return("s1 = s2");
        }
        i++;
        return(0);
    }
}