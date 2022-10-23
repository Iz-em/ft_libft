#include "libft.h"
int ft_strncmp ( const char * str1, const char * str2, size_t num )
{
    size_t i;
    unsigned char *str0;
    str0 = (unsigned char*)(str1);
    unsigned char *str3;
    str3 = (unsigned char*)(str2);
    i = 0;
    while ((str0[i] || str3[i]) && i <= num - 1 )
    {
    if (str0[i] > str3[i] )
        return(1);
    else if (str0[i] < str3[i])
        return (-1);
    i++;
    }
    return(0);
}